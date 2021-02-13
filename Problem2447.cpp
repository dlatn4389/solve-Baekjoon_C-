#include <iostream>
using namespace std;

char board[6561][6561];

void setStar(int start_row, int start_col, int size) {
    if (size==1) {
        board[start_row][start_col] = '*';
    }
    else {
        for (int i=start_row+size/3; i<start_row+2*(size/3); i++) {
            for (int j=start_col+size/3; j<start_col+2*(size/3); j++) {
                board[i][j] = ' ';
            }
        }
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (i!=1 || j!=1) {
                    setStar(start_row+i*(size/3), start_col+j*(size/3), size/3);
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    setStar(0, 0, N);

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }
}