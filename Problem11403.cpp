#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 정점의 개수
int n;

// 노드와 노드가 연결되지 않았음을 나타내는 값
const int INF = 987654321;

// 인접 행렬
vector<vector<int>> graph;

// 플로이드 워셜 알고리즘
void floid_warshall() {
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 인접 행렬 크기 설정
    cin >> n;
    graph.resize(n+1);
    for (int i=1; i<=n; i++) {
        graph[i].resize(n+1);
    }

    // 인접 행렬 정보 입력
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> graph[i][j];
            if (graph[i][j]==0) {
                graph[i][j] = INF;
            }
        }
    }

    floid_warshall();

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (graph[i][j]==INF) {
                cout << 0 << ' ';
            }
            else {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }
}