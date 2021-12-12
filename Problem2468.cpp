#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 행과 열의 개수
int N;

#include <vector>
// 지역의 정보를 담는 vector
vector<vector<int>> board;

bool dfs(int row, int col, int height, vector<vector<int>> &v) {
    // 배열의 인덱스를 초과하는 값에 대한 처리
    if (row<0 or col<0 or row>=N or col>=N) return false;
    
    if (v[row][col]>height) {
        // 방문처리 되도록 v[row][col]의 값을 height으로 변경
        v[row][col] = height;
        dfs(row, col+1, height, v);
        dfs(row+1, col, height, v);
        dfs(row, col-1, height, v);
        dfs(row-1, col, height, v);
        return true;
    }
    return false;
}

int main() {
    cin >> N;
    board.resize(N);
    for (int i=0; i<N; i++) {
        board[i].resize(N);
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> board[i][j];
        }
    }
    
    int max_area_num = 0;
    
    for (int height=0; height<100; height++) {
        vector<vector<int>> temp_board(board);
        int area_num = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (dfs(i, j, height, temp_board)) {
                    area_num++;
                }
            }
        }
        max_area_num = max(max_area_num, area_num);
        // 잠기지 않는 영역이 없다면, 반복문을 종료
        if (area_num==0) break;
    }
    
    cout << max_area_num;
}