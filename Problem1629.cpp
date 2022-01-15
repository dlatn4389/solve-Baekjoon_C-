#include <iostream>
using namespace std;

typedef long long ll;

// 곱할 수
int a;
// 곱할 횟수
int b;
// mod
int c;

ll mul(int n, int k) {
    if (k==1) {
        return n%c;
    }
    ll half = mul(n, k/2);
    ll answer = half*half;
    answer %= c;

    if (k%2==1) {
        answer *= n;
        answer %= c;
    }
    return answer;
}

int main() {
    cin >> a >> b >> c;
    cout << mul(a, b);
}
