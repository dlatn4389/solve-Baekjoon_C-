#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

int n, k;

vector<vector<int>> dp;

int main() {
    cin >> n >> k;
    dp.resize(k+1);
    for (int i=0; i<=k; i++) {
        dp[i].resize(n+1);
    }

    for (int i=1; i<=k; i++) {
        dp[i][0] = 1;
    }

    for (int i=1; i<=k; i++) {
        for (int j=1; j<=n; j++) {
            dp[i][j] += dp[i][j-1]+dp[i-1][j];
            dp[i][j] %= 1000000000;
        }
    }

    cout << dp[k][n];
}