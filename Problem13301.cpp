#include <iostream>
using namespace std;
typedef long long ll;

ll fibo[82];

void makeFibo() {
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i=3; i<=81; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
}

int main() {
    makeFibo();

    int N; cin >> N;

    ll answer = 2*(fibo[N]+fibo[N+1]);
    cout << answer;
}
