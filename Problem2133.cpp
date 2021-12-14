#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 가로의 크기
int N;
// memoization
int *dp;

int main() {
    cin >> N;
    dp = new int[N+1];
    dp[0] = 1;
    
    for (int i=1; i<=N; i++) {
        if (i%2==1) dp[i] = 0;
        else {
            dp[i] += 3*dp[i-2];
            for (int j=4; i-j>=0; j+=2) {
                dp[i] += 2*dp[i-j];
            }
        }
    }
    cout << dp[N];
}