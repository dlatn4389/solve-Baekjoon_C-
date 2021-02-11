#include <iostream>
#include <queue>
using namespace std;

int board[101][101];
bool visited[101][101];

int move_row[] = {1, 0, -1, 0};
int move_col[] = {0, 1, 0, -1};

void bfs(int row, int column, int N, int M) {
    visited[row][column] = true;
    queue<pair<int, int>> q;
    q.push({row, column});

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for (int i=0; i<4; i++) {
            int nrow = r+move_row[i];
            int ncol = c+move_col[i];

            if (nrow<=0 || ncol<=0 || nrow>N || ncol > M) {
                continue;
            }
            if (!visited[nrow][ncol] && board[nrow][ncol]==1) {
                visited[nrow][ncol] = true;
                board[nrow][ncol] = board[r][c] + 1;
                q.push({nrow, ncol});
            }
        }
    }
}

int main() {
    int N; int M;
    cin >> N >> M;

    for (int i=1; i<=N; i++) {
        string input; cin >> input;
        for (int j=0; j<M; j++) {
            board[i][j+1] = input.at(j)-'0';
        }
    }

    bfs(1, 1, N, M);
    cout << board[N][M];
}