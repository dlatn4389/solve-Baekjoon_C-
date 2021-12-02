#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <list>

int main() {
  list<char> lt;
  string str; cin >> str;

  for (char c: str) {
    lt.push_back(c);
  }

  auto it = lt.end();

  int M; cin >> M;

  while (M--) {
    char command; cin >> command;
    if (command=='L') {
      if (it!=lt.begin()) {
        it--;
      }
    }
    else if (command=='D') {
      if (it!=lt.end()) {
        it++;
      }
    }
    else if (command=='B') {
      if (it!=lt.begin()) {
        it = lt.erase(--it);
      }
    }
    else {
      char c; cin >> c;
      lt.insert(it, c);
    }
  }
  for (char c: lt) {
      cout << c;
    }
    cout << endl;
}