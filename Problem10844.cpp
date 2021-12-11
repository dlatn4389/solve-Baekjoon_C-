#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 길이
int N;
// 끝자리가 0~9인 숫자들의 갯수를 저장하는 배열
int dp[101][10];

int main() {
    cin >> N;
    
    for (int i=1; i<10; i++) {
        dp[1][i] = 1;
    }
    
    for (int i=2; i<=100; i++) {
        for (int j=0; j<10; j++) {
            if (j==0) {
                dp[i][0] = dp[i-1][1];
            }
            else if (j==9) {
                dp[i][9] = dp[i-1][8];
            }
            else {
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
            }
        }
    }
    
    int sum = 0;
    for (int i=0; i<10; i++) {
        sum += dp[N][i];
        sum %= 1000000000;
    }
    cout << sum;
}