#include <iostream>
using namespace std;

long long P[101] = {0,};

int main() {
    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;

    for (int i=6; i<=100; i++) {
        P[i] = P[i-5]+P[i-1];
    }

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << P[N] << '\n';
    }
}
