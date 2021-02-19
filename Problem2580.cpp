#include <iostream>
using namespace std;
#include <vector>

const int MAX = 9;

int board[MAX][MAX];
vector<pair<int, int>> blanks;

bool rowCheck(int row, int num) {
    for (int col=0; col<MAX; col++) {
        if (board[row][col]==num) {
            return false;
        }
    }
    return true;
}

bool colCheck(int col, int num) {
    for (int row=0; row<MAX; row++) {
        if (board[row][col]==num) {
            return false;
        }
    }
    return true;
}

bool boxCheck(int row, int col, int num) {
    row = (row/3)*3;
    col = (col/3)*3;
    for (int r=row; r<row+3; r++) {
        for (int c=col; c<col+3; c++) {
            if (board[r][c]==num) {
                return false;
            }
        }
    }
    return true;
}

bool check(int row, int col, int num) {
    if (rowCheck(row, num) && colCheck(col, num) && boxCheck(row, col, num)) {
        return true;
    }
    return false;
}

void print_sdoku() {
    for (int i=0; i<MAX; i++) {
        for (int j=0; j<MAX; j++) {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
}

void sdoku(int find) {
    if (find==blanks.size()) {
        print_sdoku();
        exit(0);
    }

    int row = blanks[find].first;
    int col = blanks[find].second;

    for (int num=1; num<=9; num++) {
        if (check(row, col, num)) {
            board[row][col] = num;
            sdoku(find+1);
            board[row][col] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> board[i][j];
            if (board[i][j]==0) {
                blanks.push_back({i, j});
            }
        }
    }
    sdoku(0);
}