#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int yonsei, korea;
    while (T--) {
        int sumY = 0, sumK = 0;
        for (int i=0; i<9; i++) {
            cin >> yonsei >> korea;
            sumY += yonsei;
            sumK += korea;
        }
        if (sumY>sumK) {
            cout << "Yonsei";
        }
        else if (sumK>sumY) {
            cout << "Korea";
        }
        else {
            cout << "Draw";
        }
        cout << '\n';
    }
}
