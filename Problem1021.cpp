#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <queue>
queue<int> q;

void reset(int front) {
  while (q.front()!=front) {
    q.push(q.front());
    q.pop();
  }
}

int second(int target) {
  int answer = 0;
  while (q.front()!=target) {
    q.push(q.front());
    q.pop();
    answer++;
  }
  return answer;
}

int third(int target) {
  int answer = 0;
  while (q.front()!=target) {
    for (int i=0; i<q.size()-1; i++) {
      q.push(q.front());
      q.pop();
    }
    answer++;
  }
  return answer;
}

int main() {
  int N, M; cin >> N >> M;
  
  for (int i=1; i<=N; i++) {
    q.push(i);
  }

  int answer = 0;
  for (int i=0; i<M; i++) {
    int in, min; cin >> in;
    int front = q.front();
    int a = second(in);
    reset(front);
    int b = third(in);
    reset(front);
    if (a>b) min = third(in);
    else min = second(in);
    answer += min;
    q.pop();
  }
  cout << answer;
}