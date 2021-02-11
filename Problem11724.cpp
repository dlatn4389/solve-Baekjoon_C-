#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

bool dfs(int v) {
    if (visited[v]) return false;
    visited[v] = true;

    for (int i : graph[v]) {
        dfs(i);
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    while (M--) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    int answer = 0;
    for (int i=1; i<=N; i++) {
        if (dfs(i)) {
            answer++;
        }
    }
    cout << answer;
}
