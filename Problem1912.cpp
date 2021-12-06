#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  fast_io();

  int n; cin >> n;
  int arr[n];
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  int dp[n];
  
  dp[0] = arr[0];
  for (int i=1; i<n; i++) {
    dp[i] = max(dp[i-1]+arr[i], arr[i]);
  }
  int max = -99999999;
  for (int i=0; i<n; i++) {
    if (dp[i]>max) max = dp[i];
  }
  cout << max;
}