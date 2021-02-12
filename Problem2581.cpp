#include <iostream>
using namespace std;
#include <vector>

vector<int> primes;

bool isPrime(int n) {
    if (n==1) return false;
    for (int i=2; i<n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0;
    for (int i=M; i<=N; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
            sum += i;
        }
    }

    if (primes.size()==0) {
        cout << -1;
        return 0;
    }

    cout << sum << '\n' << primes[0];
}
