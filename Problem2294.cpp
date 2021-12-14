#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 동전의 개수
int n;
// 목표로 하는 가치의 합
int k;
// 동전의 정보를 저장하는 배열
int *coins;
// memoization
int *dp;
// 주어진 동전으로 표현할 수 없을 때의 값
const int INF = 99999999;

int main() {
    fast_io();
    
    cin >> n >> k;
    coins = new int[n];
    dp = new int[k+1];
    
    for (int i=0; i<n; i++) {
        cin >> coins[i];
    }
    for (int i=1; i<=k; i++) {
        dp[i] = INF;
    }
    
    for (int i=0; i<n; i++) {
        int coin = coins[i];
        for (int money=coin; money<=k; money++) {
            dp[money] = min(dp[money], dp[money-coin]+1);
        }
    }
    
    if (dp[k]==INF) cout << -1;
    else cout << dp[k];
}