#include <iostream>
using namespace std;
#include <queue>

int board[1000][1000];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int N, int M) {
    queue<pair<int, int>> q;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (board[i][j]==1) {
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i=0; i<4; i++) {
            int nrow = r+dx[i];
            int ncol = c+dy[i];
            if (nrow<0 || ncol<0 || nrow>=N || ncol>=M) continue;
            if (board[nrow][ncol]==0) {
                board[nrow][ncol] = board[r][c]+1;
                q.push({nrow, ncol});
            }
        }
    }
}

int check(int N, int M) {
    int max = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (board[i][j]==0) return -1;
            if (board[i][j]>max) max = board[i][j];
        }
    }
    return max-1;
}

void print(int N, int M) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N; cin >> M >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            int input; cin >> input;
            board[i][j] = input;
        }
    }

    bfs(N, M);
    cout << check(N, M);
}
