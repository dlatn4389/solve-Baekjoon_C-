#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <queue>

int main() {
  int N; cin >> N;
  queue<int> q;

  for (int i=1; i<=N; i++) {
    q.push(i);
  }

  for (int i=0; i<N-1; i++) {
    q.pop();
    q.push(q.front());
    q.pop();
  }
  cout << q.front();
}