#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

long long arr[91];

int main() {
  arr[1] = 1;
  arr[2] = 1;

  for (int i=3; i<=90; i++) {
    arr[i] = arr[i-2]+arr[i-1];
  }
  int N; cin >> N;
  cout << arr[N];
}