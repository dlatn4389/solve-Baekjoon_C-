#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int N, M;
int arr[8];
bool visited[8];
int ans[8];

void combination(int start, int chosen) {
  if (chosen==M) {
    for (int i=0; i<M; i++) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
    return;
  }

  for (int i=start; i<N; i++) {
    if (!visited[i]) {
      visited[i] = true;
      ans[chosen] = arr[i];
      combination(i+1, chosen+1);
      visited[i] = false;
    }
  }
}

int main() {
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+N);
  combination(0, 0);
}