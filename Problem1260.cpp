#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";
    for (int i : graph[v]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty()) {
        int V = q.front();
        cout << V << " ";
        q.pop();
        for (int i : graph[V]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;
    for (int i=0; i<=N; i++) {
        vector<int> v;
        bool f = false;
        graph.push_back(v);
        visited.push_back(f);
    }

    for (int i=0; i<M; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i=1; i<=N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    for (int i=1; i<=N; i++) {
        visited[i] = false;
    }

    cout << '\n';

    bfs(V);
}
