#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Create a graph represented as an adjacency list
vector<vector<int>> graph = {
    {1, 2},
    {0, 3, 4},
    {0, 4},
    {1, 5},
    {1, 2, 5},
    {3, 4}
};

void bfs(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << "Visiting node: " << node << endl;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    cout << "Breadth-First Search starting from node 0:" << endl;
    bfs(graph, 0);

    return 0;
}
