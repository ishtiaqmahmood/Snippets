#include <iostream>
#include <vector>
#include <thread>
#include <queue>
#include <functional>
#include <condition_variable>

class ThreadPool_U {
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex m_tp;
    std::condition_variable cv_tp;
    bool stop_tp = false;
public:
    ThreadPool_U(size_t threads) {
        for(size_t i=0; i<threads; ++i)
            workers.emplace_back([this]{
                while(true) {
                    std::function<void()> task;
                    {
                        std::unique_lock l(m_tp);
                        cv_tp.wait(l, [this]{ return stop_tp || !tasks.empty(); });
                        if(stop_tp && tasks.empty()) return;
                        task = std::move(tasks.front());
                        tasks.pop();
                    }
                    task();
                }
            });
    }
    void enqueue(std::function<void()> task) {
        { std::unique_lock l(m_tp); tasks.push(task); }
        cv_tp.notify_one();
    }
    ~ThreadPool_U() {
        { std::unique_lock l(m_tp); stop_tp = true; }
        cv_tp.notify_all();
        for(auto& t : workers) t.join();
    }
};

int main() {
    ThreadPool_U pool(4);
    pool.enqueue([]{ std::cout << "Task executed\n"; });
    return 0;
}
