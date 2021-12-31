#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 세로의 크기
int r;
// 가로의 크기
int c;

// 보드의 정보를 담을 배열
vector<vector<char>> board;
// 방문 여부를 담을 배열
bool visited[26];


// 행과 열이 적절한 범위 안에 속해있는지 확인하는 함수
bool is_range(int row, int col) {
    if (row<0 or col<0 or row>=r or col>=c) {
        return false;
    }
    return true;
}

// 상하좌우 행/열의 변화 값
int drow[4] = {0, 1, 0, -1};
int dcol[4] = {1, 0, -1, 0};


int backtrack(int row, int col, vector<char> &v) {
    char c =  board[row][col];
    // 이미 방문했다면, v의 크기를 반환
    if (visited[c-'A']) {
        return v.size();
    }
    // 방문하지 않았다면, v에 원소를 추가한 후 방문 처리
    else {
        v.push_back(c);
        visited[c-'A'] = true;
    }

    int answer = 0;

    for (int i=0; i<4; i++) {
        int nrow = row+drow[i];
        int ncol = col+dcol[i];
        if (!is_range(nrow, ncol)) continue;
        
        // 더 큰 값을 선택
        answer = max(answer, backtrack(nrow, ncol, v));
    }
    // board[row][col]을 방문하지 않은 경우를 탐색하기 위해 제거
    v.pop_back();
    visited[c-'A'] = false;

    return answer;
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 크기 입력 및 배열의 크기 조정
    cin >> r >> c;
    board.resize(r);
    for (int i=0; i<r; i++) {
        board[i].resize(c);
    }

    for (int i=0; i<r; i++) {
        string s; cin >> s;
        for (int j=0; j<c; j++) {
            board[i][j] = s[j];
        }
    }

    vector<char> v;
    cout << backtrack(0, 0, v);
}