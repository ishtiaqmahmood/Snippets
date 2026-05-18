#include <iostream>
#include <string>
#include <mutex>

class Logger_U {
    std::mutex m_log;
public:
    void log(std::string msg) {
        std::lock_guard l(m_log);
        std::cout << "[LOG] " << msg << std::endl;
    }
};

int main() {
    Logger_U logger;
    logger.log("System started");
    return 0;
}
