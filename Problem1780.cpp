#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

// 최대 크기: 3의 7승
const int MAX = 3*3*3*3*3*3*3;
// 종이 정보를 담을 배열
int paper[MAX][MAX];

// cnt1: -1, cnt2: 0, cnt3: 1
int cnt1, cnt2, cnt3;

bool check_1(int row, int col, int size) {
  for (int i=row; i<row+size; i++) {
    for (int j=col; j<col+size; j++) {
      if (paper[i][j]!=-1) return false;
    }
  }
  return true;
}

bool check_2(int row, int col, int size) {
  for (int i=row; i<row+size; i++) {
    for (int j=col; j<col+size; j++) {
      if (paper[i][j]!=0) return false;
    }
  }
  return true;
}

bool check_3(int row, int col, int size) {
  for (int i=row; i<row+size; i++) {
    for (int j=col; j<col+size; j++) {
      if (paper[i][j]!=1) return false;
    }
  }
  return true;
}

void check(int start_row, int start_col, int size) {
  if (check_1(start_row, start_col, size)) cnt1++;
  else if (check_2(start_row, start_col, size)) cnt2++;
  else if (check_3(start_row, start_col, size)) cnt3++;
  else {
    // 종이 분할
    int nsize = size/3;
    check(start_row, start_col, nsize);
    check(start_row, start_col+nsize, nsize);
    check(start_row, start_col+2*nsize, nsize);

    check(start_row+nsize, start_col, nsize);
    check(start_row+nsize, start_col+nsize, nsize);
    check(start_row+nsize, start_col+2*nsize, nsize);

    check(start_row+2*nsize, start_col, nsize);
    check(start_row+2*nsize, start_col+nsize, nsize);
    check(start_row+2*nsize, start_col+2*nsize, nsize);
  }
}

int main() {
  fast_io();

  int N; cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cin >> paper[i][j];
    }
  }
  check(0, 0, N);
  cout << cnt1 << endl << cnt2 << endl << cnt3;
}