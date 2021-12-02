#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <vector>

int main() {
  int T; cin >> T;
  
  while (T--) {
    vector<pair<string, int>> clothes;
    int N; cin >> N;
    while (N--) {
      string cloth, kind;
      cin >> cloth >> kind;

      bool exist = false;
      for (int i=0; i<clothes.size(); i++) {
        pair<string, int> p = clothes[i];
        if (p.first==kind) {
          clothes[i].second++;
          exist = true;
        }
      }
      if (!exist) {
        clothes.push_back({kind, 1});
      }
    }
   
    int answer = 1;
    for (auto p: clothes) {
      answer *= (p.second+1);
    }
    cout << answer-1 << endl;;
  }
}