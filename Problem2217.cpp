#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main() {
  fast_io();

  int N; cin >> N;

  int max = 0;

  int ropes[N];
  for (int i=0; i<N; i++) {
    cin >> ropes[i];
  }
  sort(ropes, ropes+N);
  for (int i=0; i<N; i++) {
    int weight = ropes[N-i-1]*(i+1);
    if (max<weight) max = weight;
  }
  cout << max;
}