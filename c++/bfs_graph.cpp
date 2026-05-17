#include <iostream>
#include <vector>
#include <queue>

class Graph {
    int V;
    std::vector<std::vector<int>> adj;
public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int v, int w) { adj[v].push_back(w); }
    void BFS(int s) {
        std::vector<bool> visited(V, false);
        std::queue<int> q;
        visited[s] = true;
        q.push(s);
        while (!q.empty()) {
            s = q.front();
            std::cout << s << " ";
            q.pop();
            for (auto i : adj[s]) {
                if (!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1); g.addEdge(0, 2); g.addEdge(1, 2); g.addEdge(2, 0); g.addEdge(2, 3); g.addEdge(3, 3);
    g.BFS(2);
    std::cout << std::endl;
    return 0;
}
