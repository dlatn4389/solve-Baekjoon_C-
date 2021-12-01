#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int stairs[301];
int max_scores[301];

int max(int a, int b) {
  if (a>b) return a;
  return b;
}

int main() {
  int stair_num; cin >> stair_num;
  for (int i=1; i<=stair_num; i++) {
    cin >> stairs[i];
  }
  max_scores[0] = stairs[0];
  max_scores[1] = stairs[1];
  max_scores[2] = stairs[1]+stairs[2];

  for (int i=3; i<=300; i++) {
    max_scores[i] = max(max_scores[i-3]+stairs[i-1]+stairs[i], max_scores[i-2]+stairs[i]);
  }
  cout << max_scores[stair_num];
}