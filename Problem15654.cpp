#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int arr[8];
int choose[8];
bool visited[8];

int N, M;

void combination(int chosen) {
  if (chosen==M) {
    for (int i=0; i<M; i++) {
      cout << choose[i] << ' ';
    }
    cout << '\n';
    return;
  }
  for (int i=0; i<N; i++) {
    if (!visited[i]) {
      visited[i] = true;
      choose[chosen] = arr[i];
      combination(chosen+1);
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
  combination(0);
}