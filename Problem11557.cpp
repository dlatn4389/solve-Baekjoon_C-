#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}

pair<string, int> info[100];

bool cmp(pair<string, int> p1, pair<string, int> p2) {
  return p1.second < p2.second;
}

int main() {
  int T; cin >> T;

  while (T--) {
    int N; cin >> N;
    for (int i=0; i<N; i++) {
      string school;
      int alchol;
      cin >> school >> alchol;
      info[i] = {school, alchol};
    }
    sort(info, info+N, cmp);
    cout << info[N-1].first << endl;
  }
}