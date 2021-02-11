#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char houses[25][25];
vector<int> danji;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int dfs(int row, int col, int N) {
    if (row<0 || col<0 || row>=N || col>=N) return 0;
    if (houses[row][col]=='0') return 0;

    houses[row][col] = '0';

    int sum = 0;
    for (int i=0; i<4; i++) {
        sum += dfs(row+dx[i], col+dy[i], N);
    }
    return sum+1;
}

int main() {
    int N; cin >> N;
    for (int i=0; i<N; i++) {
        cin >> houses[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (houses[i][j]=='1') {
                danji.push_back(dfs(i, j, N));
            }
        }
    }

    cout << danji.size() << '\n';
    sort(danji.begin(), danji.end());
    for (int i : danji) {
        cout << i << '\n';
    }
}
