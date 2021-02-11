#include <iostream>
#include <queue>
using namespace std;

int board[300][300] = {0,};
bool visited[300][300];

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

void initialize() {
    for (int i=0; i<300; i++) {
        for (int j=0; j<300; j++) {
            board[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

void bfs(int row, int col, int I) {
    visited[row][col] = true;
    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i=0; i<8; i++) {
            int nrow = r+dx[i];
            int ncol = c+dy[i];
            if (nrow<0 || ncol<0 || nrow>=I || ncol>=I) continue;
            if (!visited[nrow][ncol]) {
                visited[nrow][ncol] = true;
                board[nrow][ncol] = board[r][c]+1;
                q.push({nrow, ncol});
            }
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;

    while (T--) {
        int I; cin >> I;
        int start_row, start_col;
        int end_row, end_col;
        cin >> start_row >> start_col;
        cin >> end_row >> end_col;

        bfs(start_row, start_col, I);
        cout << board[end_row][end_col] << '\n';

        initialize();
    }
}
