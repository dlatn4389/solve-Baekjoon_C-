#include <iostream>
using namespace std;

int main() {
    int maxrow;
    int maxcol;
    int max = 0;
    int board[9][9];
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            int N; cin >> N;
            if (N>max) {
                max = N;
                maxrow = i+1;
                maxcol = j+1;
            }
        }
    }
    cout << max << '\n';
    cout << maxrow << " " << maxcol;
}
