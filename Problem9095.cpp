#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int arr[11];

int main() {
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 4;

  for (int i=4; i<=10; i++) {
    arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
  }

  int T; cin >> T;

  while (T--) {
    int n; cin >> n;
    cout << arr[n] << endl;
  }
}