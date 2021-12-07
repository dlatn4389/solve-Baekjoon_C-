#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

const int MAX = 100000+1;
// 부모 노드의 정보를 담을 배열
int parent[MAX];
// 탐색 시 방문 여부를 담을 배열
bool visited[MAX];

#include <vector>
vector<int> graph[MAX];

// 노드의 개수
int N;

void dfs(int start) {
  visited[start] = true;
  for (int node: graph[start]) {
    if (!visited[node]) {
      parent[node] = start;
      dfs(node);
    }
  }
}

int main() {
  fast_io();

  cin >> N;
  for (int i=0; i<N-1; i++) {
    int node1, node2;
    cin >> node1 >> node2;
    graph[node1].push_back(node2);
    graph[node2].push_back(node1);
  }
  
  dfs(1);

  for (int i=2; i<=N; i++) {
    cout << parent[i] << endl;
  }
}