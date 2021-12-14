#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// N: 행의 크기, M: 열의 크크기
int N, M;
// 미로의 정보를 담는 배열
int maze[1001][1001];
// memoization
int dp[1001][1001];

int main() {
    fast_io();
    
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            cin >> maze[i][j];
        }
    }
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            dp[i][j] = max(dp[i][j-1], dp[i-1][j])+maze[i][j];
        }
    }
    cout << dp[N][M];
}