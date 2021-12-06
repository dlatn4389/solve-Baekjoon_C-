#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

bool world[50][50];
// 0: sea, 1: ground

void initialize(int w, int h) {
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cin >> world[i][j];
    }
  }
}

bool bfs(int row, int col, int w, int h) {
  if (row<0 or col<0 or row>=h or col>=w) {
    return false;
  }
  if (world[row][col]) {
    // 만약 world[row][col]==1(즉, ground)일 때, 주변 8칸 중
    // ground인 것들을 모두 sea로 바꿈(중복해서 세지 않기 위함)
    world[row][col] = false;
    bfs(row-1, col, w, h);
    bfs(row+1, col, w, h);
    bfs(row, col-1, w, h);
    bfs(row, col+1, w, h);
    bfs(row-1, col-1, w, h);
    bfs(row-1, col+1, w, h);
    bfs(row+1, col-1, w, h);
    bfs(row+1, col+1, w, h);
    return true;
  }
  return false;
}

int main() {
  fast_io();

  while (1) {
    int w, h; cin >> w >> h;
    // 무한loop 종료조건
    if (w==0 and h==0) break;

    // bool world[h][w] initialize
    initialize(w, h);

    int answer = 0;
    for (int i=0; i<h; i++) {
      for (int j=0; j<w; j++) {
        if (bfs(i, j, w, h)) {
          answer++;
        }
      }
    }
    cout << answer << '\n';
  }
}