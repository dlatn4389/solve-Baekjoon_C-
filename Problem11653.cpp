#include <iostream>
using namespace std;

void factorize(int N) {
    if (N==1) return;
    else {
        for (int i=2; i<=N; i++) {
            if (N%i==0) {
                cout << i << '\n';
                N /= i;
                break;
            }
        }
        factorize(N);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    factorize(N);
}
