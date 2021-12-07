#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

// 사람 수
int n;
// 촌수를 계산해야 하는 사람 둘
int x, y;
//부모 자식들 간의 관계의 개수
int m;

#include <vector>
vector<int> graph[101];
// 노드 방문여부를 저장하는 배열
bool visited[101];
// 촌수를 저장하는 배열
int kinship[101];

void dfs(int start) {
  visited[start] = true;
  for (int node: graph[start]) {
    if (!visited[node]) {
      kinship[node] = kinship[start]+1;
      dfs(node);
    }
  }
}

int main() {
  fast_io();

  cin >> n;
  cin >> x >> y;
  cin >> m;

  for (int i=0; i<m; i++) {
    int parent, child;
    cin >> parent >> child;
    graph[parent].push_back(child);
    graph[child].push_back(parent);
  }

  // y를 시작점으로 dfs. kinship[y]=0
  dfs(y);
  // dfs 결과 x를 방문하지 않았다면 촌수 관계가 없는 것
  if (!visited[x]) {
    cout << -1;
  }
  else {
    cout << kinship[x];
  }
}