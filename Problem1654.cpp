#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <limits.h>

typedef long long ll;

int main() {
  int K, N; cin >> K >> N;

  ll max = 0;
  ll sticks[K];
  for (int i=0; i<K; i++) {
    cin >> sticks[i];
    if (sticks[i]>max) max = sticks[i];
  }

  ll start = 1;
  ll end = max;
  ll answer = 0;

  while (start<=end) {
    ll mid = (start+end)/2;
    ll sum = 0;
    for (int i=0; i<K; i++) {
      sum += sticks[i]/mid;
    }
    if (sum>=N) {
      answer = mid;
      start = mid+1;
    }
    else {
      end = mid-1;
    }
  }
  cout << answer;
}