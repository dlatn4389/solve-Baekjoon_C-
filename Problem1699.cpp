#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int dp[100001];

int main() {
    int N; cin >> N;
    for (int i=1; i<=100000; i++) {
        dp[i] = i;
    }
    for (int i=1; i<=100000; i++) {
        for (int j=1; j*j<=i; j++) {
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    cout << dp[N];
}