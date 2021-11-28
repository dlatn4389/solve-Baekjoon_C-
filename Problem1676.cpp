#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

pair<int, int> count_twofive[501];

void initialize() {
  count_twofive[0] = {0,0};

  for (int i=1; i<=500; i++) {
    int temp_i = i;
    pair<int, int> p = count_twofive[i-1];
    while (temp_i%2==0 or temp_i%5==0) {
      if (temp_i%2==0) {
        p.first++;
        temp_i /= 2;
      }
      if (temp_i%5==0) {
        p.second++;
        temp_i /= 5;
      }
    }
    count_twofive[i] = p;
  }
}

int main() {
  initialize();
  int N; cin >> N;

  pair<int, int> p = count_twofive[N];
  if (p.first<p.second) cout << p.first;
  else cout << p.second;
}