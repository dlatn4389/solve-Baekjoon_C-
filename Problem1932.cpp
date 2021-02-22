#include <iostream>
using namespace std;

int triNums[501][501] = {0,};
int dp[501][501] = {0,};

int max(int a, int b) {
    if (a>b) return a;
    return b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cin >> triNums[i][j];
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-1])+triNums[i][j];
        }
    }

    int max = 0;
    for (int i=1; i<=n; i++) {
        if (dp[n][i]>max) {
            max = dp[n][i];
        }
    }
    cout << max;
}
