#include <iostream>
using namespace std;

void print(int, int, int);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;
        print(H, W, N);
        cout << '\n';
    }
}

void print(int H, int W, int N) {
    for (int j=1; j<=W; j++) {
        for (int i=1; i<=H; i++) {
            N-=1;
            if (N==0) {
                if (j<10) {
                    cout << i << "0" << j;
                }
                else {
                    cout << i << j;
                }
                return;
            }
        }
    }
}
