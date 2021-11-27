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
  int T; cin >> T;
  
  while (T--) {
    queue<pair<int, int>> q;
    int N, M; cin >> N >> M;
    int arr[N];
    for (int i=0; i<N; i++) {
      int n; cin >> n;
      arr[i] = n;
      q.push({i, n});
    }
    sort(arr, arr+N);
    for (int i=N-1; i>=0; i--) {
      int order = arr[i];
      while (q.front().second!=order) {
        q.push(q.front());
        q.pop();
      }
      int m = q.front().first;
      q.pop();
      if (m==M) {
        cout << N-i << endl;
        break;
      }
    }
  }
}