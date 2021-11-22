#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}

bool board[50][50];
bool row[50];
bool col[50];

int N, M;

void initialize() {
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    string in; cin >> in;
    for (int j=0; j<M; j++) {
      if (in[j]=='X') board[i][j] = true;
    }
  }
}

void update_row() {
  for (int i=0; i<N; i++) {
    bool exist = false;
    for (int j=0; j<M; j++) {
      if (board[i][j]) exist = true;
    }
    row[i] = exist;
  }
}

void update_col() {
  for (int i=0; i<M; i++) {
    bool exist = false;
    for (int j=0; j<N; j++) {
      if (board[j][i]) exist = true;
    }
    col[i] = exist;
  }
}

int main() {
  initialize();
  update_row();
  update_col();

  int count_row = 0;
  int count_col = 0;

  for (int i=0; i<N; i++) {
    if (!row[i]) count_row++;
  }
  for (int i=0; i<M; i++) {
    if (!col[i]) count_col++;
  }

  if (count_row>count_col) cout << count_row;
  else cout << count_col;
}