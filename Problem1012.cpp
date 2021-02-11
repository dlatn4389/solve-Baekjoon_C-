#include <iostream>
using namespace std;

int field[50][50] = {0,};

bool dfs(int row, int col, int N, int M) {
    if (row<0 || col<0 || row>=N || col>=M) return false;

    if (field[row][col]==1) {
        field[row][col] = 0;
        dfs(row-1, col, N, M);
        dfs(row+1, col, N, M);
        dfs(row, col-1, N, M);
        dfs(row, col+1, N, M);
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;

    while (T--) {
        int N, M, K; cin >> N >> M >> K;

        while (K--) {
            int row, col; cin >> row >> col;
            field[row][col] = 1;
        }

        int answer = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                if (dfs(i, j, N, M)) {
                    answer++;
                }
            }
        }
        cout << answer << '\n';
    }
}
