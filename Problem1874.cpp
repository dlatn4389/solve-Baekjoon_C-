#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <vector>
#include <stack>

int arr[100000];

int main() {
  fast_io();

  int n; cin >> n;
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  int count_push = 0;

  stack<int> s;
  vector<char> chs;
  int arr_index = 0;

  while (count_push<n) {
    if (arr[arr_index]>count_push) {
      s.push(count_push+1);
      count_push++;
      chs.push_back('+');
    }
    else if (arr[arr_index]==count_push) {
      chs.push_back('-');
      s.pop();
      arr_index++;
    }
    else {
      if (s.top()==arr[arr_index]) {
        chs.push_back('-');
        s.pop();
        arr_index++;
      }
      else {
        cout << "NO";
        return 0;
      }
    }
  }

  while (arr_index<n) {
    if (s.top()==arr[arr_index]) {
      chs.push_back('-');
      s.pop();
      arr_index++;
    }
    else {
      cout << "NO";
      return 0;
    }
  }

  for (char c: chs) {
    cout << c << '\n';
  }
}

