#include <iostream>
using namespace std;
#include <vector>

vector<int> graph[101];
bool visited[101];

void dfs(int v) {
    visited[v] = true;

    for (int i : graph[v]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int V; int E;
    cin >> V >> E;

    while (E--) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    dfs(1);

    int answer = -1;
    for (int i=1; i<=V; i++) {
        if (visited[i]) {
            answer++;
        }
    }
    cout << answer;
}
