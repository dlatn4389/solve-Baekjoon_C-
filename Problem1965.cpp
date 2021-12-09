/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 입력의 크기
int n;
// 상자의 크기 정보를 담는 배열
int *box;
// LIS 정보를 담는 배열
int *dp;

int main() {
    cin >> n;
    box = new int[n];
    dp = new int[n];
    
    for (int i=0; i<n; i++) {
        cin >> box[i];
    }
    
    for (int i=0; i<n; i++) {
        dp[i] = 1;
        for (int j=0; j<i; j++) {
            if (box[j]<box[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    int max = dp[0];
    for (int i=1; i<n; i++) {
        if (dp[i]>max) max = dp[i];
    }
    cout << max;
}
