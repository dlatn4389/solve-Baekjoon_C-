#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <queue>

int main() {
  fast_io();
  // 우선순위 큐(=최대 힙) 선언. 
  priority_queue<int, vector<int>> q;

  int N; cin >> N;

  while (N--) {
    int i; cin >> i;
    // 입력이 0이라면, 최상위 원소를 출력.
    // queue가 비었을 경우, 0 출력.
    if (!i) {
      if (q.empty()) {
        cout << 0 << '\n';
      }
      else {
        cout << q.top() << '\n';
        q.pop();
      }
    }
    else {
      q.push(i);
    }
  }
}