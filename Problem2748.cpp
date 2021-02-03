#include <iostream>
using namespace std;

long long fibonacci[91];

int main() {
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i=2; i<91; i++) {
        fibonacci[i] = fibonacci[i-2]+fibonacci[i-1];
    }

    int n; cin >> n;
    cout << fibonacci[n];
}
