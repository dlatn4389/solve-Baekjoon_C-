#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 테스트케이스의 개수
int T;
// 열의 길이
int n;
// 스티커의 점수를 담을 배열
int score[3][100001];
// memoization
int dp[3][100001];

int main() {
    fast_io();
    
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i=1; i<=2; i++) {
            for (int j=1; j<=n; j++) {
                cin >> score[i][j];
            }
        }
        dp[1][1] = score[1][1];
        dp[2][1] = score[2][1];
        for (int j=2; j<=n; j++) {
            dp[1][j] = max(dp[2][j-1], dp[2][j-2])+score[1][j];
            dp[2][j] = max(dp[1][j-1], dp[1][j-2])+score[2][j];
        }
        
        int max = 0;
        for (int i=1; i<=2; i++) {
            for (int j=1; j<=n; j++) {
                if (dp[i][j]>max) max = dp[i][j];
            }
        }
        cout << max << '\n';
    }
    
}