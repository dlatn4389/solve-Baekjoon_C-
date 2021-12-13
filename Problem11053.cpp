#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 수열의 크기
int N;
// 수열
int *arr;
// LIS memoization
int *dp;

int main() {
    cin >> N;
    arr = new int[N];
    dp = new int[N];
    
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    
    for (int i=0; i<N; i++) {
        dp[i] = 1;
        for (int j=0; j<i; j++) {
            if (arr[j]<arr[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    int max_value = 0;
    for (int i=0; i<N; i++) {
        if (dp[i]>max_value) max_value = dp[i];
    }
    cout << max_value;
}