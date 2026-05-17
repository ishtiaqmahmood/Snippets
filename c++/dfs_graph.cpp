#include <iostream>
#include <vector>
#include <list>

class Graph {
    int V;
    std::vector<std::list<int>> adj;
    void DFSUtil(int v, std::vector<bool>& visited) {
        visited[v] = true;
        std::cout << v << " ";
        for (auto i : adj[v]) if (!visited[i]) DFSUtil(i, visited);
    }
public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int v, int w) { adj[v].push_back(w); }
    void DFS(int v) {
        std::vector<bool> visited(V, false);
        DFSUtil(v, visited);
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1); g.addEdge(0, 2); g.addEdge(1, 2); g.addEdge(2, 0); g.addEdge(2, 3); g.addEdge(3, 3);
    g.DFS(2);
    std::cout << std::endl;
    return 0;
}
