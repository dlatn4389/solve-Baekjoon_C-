#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int arr[100001];

int main() {
  fast_io();

  int N, M;
  cin >> N >> M;

  for (int i=1; i<=N; i++) {
    cin >> arr[i];
  }

  for (int i=1; i<=N; i++) {
    arr[i] = arr[i-1]+arr[i];
  }

  while (M--) {
    int i, j; cin >> i >> j;
    int sum = arr[j]-arr[i-1];
    cout << sum << '\n';
  }
}