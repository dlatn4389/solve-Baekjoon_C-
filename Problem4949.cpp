#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <stack>

int main() {
  fast_io();

  string str;
  while (getline(cin, str)) {
    if (str==".") break;
    stack<char> chs;

    bool balanced = true;
    for (char c: str) {
      if (c=='(' or c=='[') chs.push(c);
      else if (c==')') {
        if (chs.empty() or chs.top()!='(') {
          balanced = false;
          break;
        }
        else {
          chs.pop();
        }
      }
      else if (c==']') {
        if (chs.empty() or chs.top()!='[') {
          balanced = false;
          break;
        }
        else chs.pop();
      }
    }
    if (!balanced or !chs.empty()) cout << "no" << endl;
    else cout << "yes" << endl;
  }
}