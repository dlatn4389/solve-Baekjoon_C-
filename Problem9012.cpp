#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main() {
  int T; cin >> T;
  
  while (T--) {
    string str; cin >> str;
    int parenthesis_count = 0;
    for (char c: str) {
      if (c=='(') parenthesis_count++;
      else if (c==')') parenthesis_count--;
      if (parenthesis_count<0) break;
    }
    if (parenthesis_count) {
      cout << "NO" << '\n';
    }
    else {
      cout << "YES" << '\n';
    }
  }
}