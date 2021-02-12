#include <iostream>
using namespace std;

bool notPrime[10001];

void setArray() {
    for (int i=2; i<=10000; i++) {
        if (!notPrime[i]) {
            for (int j=2; j<=10000; j++) {
                if (i*j>10000) break;
                notPrime[i*j] = true;
            }
        }
    }
}

bool isPrime(int n) {
    if (notPrime[n]) return false;
    return true;
}

int main() {
    setArray();

    int T; cin >> T;

    int A, B;
    while (T--) {
        int n; cin >> n;

        for (int i=2; i<=n/2; i++) {
            if (isPrime(i) && isPrime(n-i)) {
                A = i;
                B = n-i;
            }
        }

        cout << A << " " << B << '\n';
    }
}
