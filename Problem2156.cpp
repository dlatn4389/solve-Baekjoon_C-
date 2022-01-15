#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

vector<int> drinks;
vector<int> dp;

int main() {
    // 포도주의 개수
    int n; cin >> n;
    drinks.resize(n+1);
    dp.resize(n+1);

    for (int i=1; i<=n; i++) {
        cin >> drinks[i];
    }

    dp[1] = drinks[1];
    if (n>=2) {
        dp[2] = dp[1]+drinks[2];
    }
    for (int i=3; i<=n; i++) {
        dp[i] = max(dp[i-3]+drinks[i-1]+drinks[i], dp[i-2]+drinks[i]);
        dp[i] = max(dp[i], dp[i-1]);
    }

    cout << dp[n];
}