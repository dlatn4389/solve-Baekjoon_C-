#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    long long N; cin >> N;

    for (long long i=1; i<=N-1; i++) {
        sum += N*i+i;
    }
    cout << sum;
}
