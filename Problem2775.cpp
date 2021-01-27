#include <iostream>
using namespace std;

int living[15][15];

int main() {
    for (int j=1; j<=14; j++) {
        living[0][j] = j;
    }
    for (int i=1; i<=14; i++) {
        for (int j=1; j<=14; j++) {
            living[i][j] = living[i][j-1]+living[i-1][j];
        }
    }
    int T; cin >> T;

    while (T--) {
        int k, n; cin >> k >> n;
        cout << living[k][n] << '\n';
    }
}
