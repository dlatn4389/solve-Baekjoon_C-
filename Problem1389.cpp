#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 유저의 수
int n;
// 친구 관계의 수
int m;

vector<vector<int>> graph;
// 친구 관계까 아님을 나타내는 값
const int INF = 987654321;

int main() {
    // 값 입력 및 인접 행렬 크기 조정
    cin >> n >> m;
    graph.resize(n+1);
    for (int i=0; i<=n; i++) {
        graph[i].resize(n+1);
    }

    // 인접 행렬 원소의 값 초기화
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            graph[i][j] = INF;
            if (i==j) {
                graph[i][j] = 0;
            }
        }
    }

    // 친구관계 입력
    while (m--) {
        int a, b; cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // 플루이드-워셜 알고리즘
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }

    // 최소 케빈 베이컨의 수를 저장할 변수
    int sum = INF;
    // 최소 케빈 베이컨의 수를 가지는 사람의 번호를 저장하는 변수
    int idx = 0;

    // 최소 케빈 베이컨의 수를 가지는 사람을 구하는 과정
    for (int i=1; i<=n; i++) {
        int temp_sum = 0;
        for (int j=1; j<=n; j++) {
            temp_sum += graph[i][j];
        }
        if (sum>temp_sum) {
            sum = temp_sum;
            idx = i;
        }
    }

    cout << idx;
}