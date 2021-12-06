#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int coins[10];

int main() {
  int N, K; cin >> N >> K;

  for (int i=0; i<N; i++) {
    cin >> coins[i];
  }

  int answer = 0;
  for (int i=N-1; i>=0; i--) {
    if (K==0) break;
    if (K/coins[i]!=0) {
      answer += K/coins[i];
       K %= coins[i];
    }
  }
  cout << answer;
}