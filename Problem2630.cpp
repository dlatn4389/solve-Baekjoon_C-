#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

const bool BLUE = true;
const bool WHITE = false;

bool paper[128][128];
int N;
int blue_num = 0;
int white_num = 0;

bool check_blue(int start_row, int start_col, int size) {
  for (int i=start_row; i<start_row+size; i++) {
    for (int j=start_col; j<start_col+size; j++) {
      if (paper[i][j]==WHITE) {
        return false;
      }
    }
  }
  return true;
}

bool check_white(int start_row, int start_col, int size) {
  for (int i=start_row; i<start_row+size; i++) {
    for (int j=start_col; j<start_col+size; j++) {
      if (paper[i][j]==BLUE) {
        return false;
      }
    }
  }
  return true;
}

void seperate(int start_row, int start_col, int size) {
  if (check_blue(start_row, start_col, size)) {
    blue_num++;
    return;
  }
  if (check_white(start_row, start_col, size)) {
    white_num++;
    return;
  }

  seperate(start_row, start_col, size/2);
  seperate(start_row+size/2, start_col, size/2);
  seperate(start_row, start_col+size/2, size/2);
  seperate(start_row+size/2, start_col+size/2, size/2);
}

int main() {
  fast_io();

  cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cin >> paper[i][j];
    }
  }

  seperate(0, 0, N);

  cout << white_num << endl << blue_num;
}