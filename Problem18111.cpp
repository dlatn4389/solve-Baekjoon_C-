#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int ground[500][500];

int main() {
  fast_io();

  int N, M, B;
  cin >> N >> M >> B;

  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      cin >> ground[i][j];
    }
  }

  int time_min = 987654321;
  int answer = 0;
  
  for (int height=0; height<=256; height++) {
    int temp_B = B;
    int time = 0;
    for (int row=0; row<N; row++) {
      for (int col=0; col<M; col++) {
        if (ground[row][col]>height) {
          temp_B += ground[row][col]-height;
          time += 2*(ground[row][col]-height);
        }
      }
    }
    for (int row=0; row<N; row++) {
      for (int col=0; col<M; col++) {
        if (ground[row][col]<height) {
          temp_B -= height-ground[row][col];
          time += height-ground[row][col];
        }
      }
    }
    if (temp_B>=0 and time<=time_min) {
      time_min = time;
      answer = height;
    }
  }

  cout << time_min << ' ' << answer;
}