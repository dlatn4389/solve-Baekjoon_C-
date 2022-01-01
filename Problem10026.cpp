#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 보드의 전체 크기
int n;

const char RED = 'R';
const char GREEN = 'G';
const char BLUE = 'B';
// 방문 후 검은색으로 변환
const char BLACK = 'K';

void print(const vector<vector<char>> &v) {
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].size(); j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
}

// 행/열이 적절한 범위에 있는지 여부를 확인하는 함수
bool is_range(int row, int col) {
    if (row<0 or col<0 or row>=n or col>=n) return false;
    return true;
}

int drow[4] = {-1, 0, 1, 0};
int dcol[4] = {0, 1, 0, -1};

bool dfs(int row, int col, char color, vector<vector<char>> &v) {
    // 행/열이 범위를 벗어나면 return false
    if (!is_range(row, col)) return false;
    // 색이 BLACK이면 이미 방문한 위치이므로 return false
    if (color==BLACK) return false;
    // 현재 탐색하고 있는 색과 다른 색이면 return false
    if (v[row][col]!=color) return false;

    v[row][col] = BLACK;
    for (int i=0; i<4; i++) {
        int nrow = row+drow[i];
        int ncol = col+dcol[i];
        dfs(nrow, ncol, color, v);
    }
    return true;
}

int main() {
    // 그림의 정보를 담을 배열
    vector<vector<char>> board;
    // 적록색약이 보는 그림의 정보를 담을 배열
    vector<vector<char>> board_color_weakness;

    // 크기 입력 및 배열 크기 조정
    cin >> n;
    board.resize(n);
    board_color_weakness.resize(n);
    for (int i=0; i<n; i++) {
        board[i].resize(n);
        board_color_weakness[i].resize(n);
    }

    for (int i=0; i<n; i++) {
        string s; cin >> s;
        for (int j=0; j<n; j++) {
            // 적록색약이 아닌 경우 입력 그대로 배열 정보 저장
            board[i][j] = s[j];
            // 적록색약의 경우 GREEN도 RED로 저장
            if (s[j]==GREEN) {
                board_color_weakness[i][j] = RED;
            }
            else {
                board_color_weakness[i][j] = s[j];
            }
        }
    }

    // 적록색약이 아닌 경우와 적록색약인 경우 구역의 수
    int area_num = 0;
    int area_num_color_weakness = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (dfs(i, j, board[i][j], board)) {
                area_num++;
            }
            if (dfs(i, j, board_color_weakness[i][j], board_color_weakness)) {
                area_num_color_weakness++;
            }
        }
    }

    cout << area_num << ' ' << area_num_color_weakness;
}