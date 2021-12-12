#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 카드의 개수
int N;
// 카드의 비용
int *cost;
// memoization
int *dp;

int main() {
    fast_io();
    
    cin >> N;
    cost = new int[N+1];
    dp = new int[N+1];
    for (int i=1; i<=N; i++) {
        cin >> cost[i];
    }
    
    for (int i=1; i<=N; i++) {
        for (int j=0; j<i; j++) {
            dp[i] = max(dp[i], dp[j]+cost[i-j]);
        }
    }
    cout << dp[N];
}