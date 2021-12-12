#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 테스트케이스의 개수
int T;
// 정수 n을 1, 2, 3의 합으로 나타내는 방법의 수를 저장하는 배열
long long dp[1000000+1];

int main() {
    cin >> T;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i=4; i<=1000000; i++) {
        dp[i] = (dp[i-3]+dp[i-2]+dp[i-1])%1000000009;
    }
    
    while (T--) {
        int n; cin >> n;
        cout << dp[n] << '\n';
    }
}