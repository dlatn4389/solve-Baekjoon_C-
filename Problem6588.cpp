#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 소수 여부를 저장하는 배열
// 0: 소수, 1: 소수가 아님
int prime[1000000+1];

void erathosthenes() {
    prime[1] = true;
    for (int i=2; i<=1000000; i++) {
        if (!prime[i]) {
            for (int j=2; j<=1000000; j++) {
                if (i*j<=1000000) {
                    prime[i*j] = true;
                }
                else break;
            }
        }
    }
}

int main() {
    fast_io();
    
    erathosthenes();

    while (1) {
        int n; cin >> n;
        if (n==0) break;
        for (int i=3; i<=n; i++) {
            if (!prime[i] and !prime[n-i]) {
                cout << n << " = " << i << " + " << n-i << '\n';
                break;
            }
        }
    }
}