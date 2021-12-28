#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

vector<bool> primes;

int main() {
    int n, k; cin >> n >> k;
    primes.resize(n+1);
    // 1은 소수가 아니므로 2부터 소수로 갱신
    for (int i=2; i<=n; i++) {
        primes[i] = true;
    }

    vector<int> v;
    for (int i=2; i<=n; i++) {
        if (primes[i]) {
            v.push_back(i);
            for (int j=2; i*j<=n; j++) {
                if (primes[i*j]) {
                    primes[i*j] = false;
                    v.push_back(i*j);
                }
            }
        }
    }
    cout << v[k-1];
}