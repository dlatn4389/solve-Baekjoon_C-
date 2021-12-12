#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 수의 길이
int N;
// 길이가 i인 수의 갯수를 일의 자리로 구분해 저장하는 배열
int dp[1001][10];

// dp[row][start_col] ~ dp[row][end_col]까지의 합을 계산(end_col 포함)
int sum(int row, int start_col, int end_col) {
    int ans = 0;
    for (int i=start_col; i<=end_col; i++) {
        ans += dp[row][i];
    }
    return ans%10007;
}

int main() {
    cin >> N;
    for (int i=0; i<10; i++) {
        dp[1][i] = 1;
    }
    for (int i=2; i<=1000; i++) {
        dp[i][0] = 1;
        for (int j=1; j<10; j++) {
            // dp[i-1][j-1]  dp[i-1][j]
            // dp[i][j-1]    dp[i][j]   일 때,
            // dp[i][j]보다 먼저 계산되는 dp[i][j-1]에는 이미 dp[i-1][0]~dp[i-1][j-1]까지의 합이 저장되어 있음.
            // 따라서 계속해서 새롭게 계산할 필요 없이, dp[i][j] = dp[i][j-1]+dp[i-1][j]
            dp[i][j] = (dp[i][j-1]+dp[i-1][j])%10007;
        }
    }
    
    cout << sum(N, 0, 9);
}