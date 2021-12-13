#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

class node {
  public:
    int row, col, height;
    node(int row, int col, int height): row(row), col(col), height(height) {}
};

// 행의 개수, 열의 개수, 높이
int N, M, H;
// 토마토의 정보를 담는 3차원 배열
int tomato[100][100][100];

int drow[6] = {0, 1, 0, -1, 0, 0};
int dcol[6] = {1, 0, -1, 0, 0, 0};
int dheight[6] = {0, 0, 0, 0, -1, 1};

#include <queue>

void bfs() {
    queue<node> q;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            for (int k=0; k<H; k++) {
                if (tomato[i][j][k]==1) {
                    node n(i, j, k);
                    q.push(n);
                }
            }
        }
    }
    
    while (!q.empty()) {
        int row = q.front().row;
        int col = q.front().col;
        int height = q.front().height;
        q.pop();
        
        for (int i=0; i<6; i++) {
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            int nheight = height+dheight[i];
            if (nrow<0 or ncol<0 or nheight<0 or nrow>=N or ncol>=M or nheight>=H) continue;
            if (tomato[nrow][ncol][nheight]==0) {
                tomato[nrow][ncol][nheight] = tomato[row][col][height]+1;
                node n(nrow, ncol, nheight);
                q.push(n);
            }
        }
    }
}

int check() {
    int date = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            for (int k=0; k<H; k++) {
                if (tomato[i][j][k]==0) return -1;
                date = max(date, tomato[i][j][k]);
            }
        }
    }
    return date-1;
}

int main() {
    fast_io();
    
    cin >> M >> N >> H;
    for (int k=0; k<H; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cin >> tomato[i][j][k];
            }
        }
    }
    bfs();
    cout << check();
}