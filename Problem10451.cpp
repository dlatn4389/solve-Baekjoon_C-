#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <vector>
vector<int> *graph;
bool *visited;

void dfs(int start) {
  visited[start] = true;
  for (int node: graph[start]) {
    if (!visited[node]) {
      dfs(node);
    }
  }
}

int main() {
  fast_io();

  // 테스트케이스의 개수
  int T; cin >> T;
  while (T--) {
    // 입력의 크기
    int N; cin >> N;
    // 입력의 크기에 따라 graph 및 visited 배열의 크기 설정
    graph = new vector<int>[N+1];
    visited = new bool[N+1];

    for (int i=1; i<=N; i++) {
      int value; cin >> value;
      graph[i].push_back(value);
    }

    int answer = 0;
    for (int i=1; i<=N; i++) {
      if (!visited[i]) {
        answer++;
        dfs(i);
      }
    }
    cout << answer << endl;
  }
}