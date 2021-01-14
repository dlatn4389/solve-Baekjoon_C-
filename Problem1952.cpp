#include <iostream>
using namespace std;

int main() {
    int row = 0, column = 0;
    int drow[4] = {0, 1, 0, -1};
    int dcolumn[4] = {1, 0, -1, 0};
    int move = 0;
    int only_turn = 0;

    int M, N;
    cin >> M >> N;
    int board[M][N];
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            board[i][j] = 0;
        }
    }
    board[0][0] = 1;

    int answer = 0;
    while (only_turn!=4) {
        move %= 4;
        int nrow = row + drow[move];
        int ncol = column + dcolumn[move];

        if (nrow<0 || ncol<0 || nrow>=M || ncol>=N) {
            only_turn += 1;
            move += 1;
            answer += 1;
            continue;
        }
        if (board[nrow][ncol]==1) {
            only_turn += 1;
            move += 1;
            answer += 1;
            continue;
        }
        row = nrow;
        column = ncol;
        board[row][column] = 1;
        only_turn = 0;
    }
    cout << answer-4;
}
