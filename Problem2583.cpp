#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// M: 행의 개수, N: 열의 개수
int N, M;
// 직사각형의 개수
int K;

#include <vector>
// 모눈종이의 정보를 담는 배열
// 0: 직사각형의 외부, 1: 직사각형의 내부
vector<vector<bool>> board;

bool dfs(int row, int col, int &temp) {
    if (row<0 or col<0 or row>=M or col>=N) return false;
    if (board[row][col]==true) return false;
    
    temp++;
    board[row][col] = true;
    dfs(row, col+1, temp);
    dfs(row+1, col, temp);
    dfs(row, col-1, temp);
    dfs(row-1, col, temp);
    
    return true;
}

int main() {
    fast_io();
    
    cin >> M >> N >> K;
    board.resize(M);
    for (int i=0; i<M; i++) {
        board[i].resize(N);
    }
    
    // 직사각형의 정보를 board에 삽입
    while (K--) {
        int start_x, start_y, end_x, end_y;
        cin >> start_x >> start_y >> end_x >> end_y;
        for (int row=M-end_y; row<M-start_y; row++) {
            for (int col=start_x; col<end_x; col++) {
                board[row][col] = true;
            }
        }
    }
    
    vector<int> area;
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            int temp = 0;
            if (dfs(i, j, temp)) area.push_back(temp);
        }
    }
    sort(area.begin(), area.end());
    
    cout << area.size() << '\n';
    for (int i: area) {
        cout << i << ' ';
    }
}