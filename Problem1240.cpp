#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>
#include <queue>

// 노드의 개수
int n;
// 거리를 알고 싶은 노드쌍의 개수
int m;

// 거리의 정보를 저장하는 배열
vector<int> dists;

// 그래프
vector<vector<pair<int, int>>> graph;

// 노드가 연결되지 않았음을 나타내는 초기 값
const int INF = 987654321;

struct cmp {
    bool operator () (pair<int, int> p1, pair<int, int> p2) {
        if (p1.second==p2.second) {
            return p1.first > p2.first;
        }
        return p1.second > p2.second;
    }
};

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
    pq.push({start, 0});
    dists[start] = 0;

    while (!pq.empty()) {
        int now = pq.top().first;
        int now_dist = pq.top().second;
        pq.pop();
        if (now_dist > dists[now]) continue;

        for (pair<int, int> p: graph[now]) {
            int node = p.first;
            int dist = p.second;

            int cost = now_dist + dist;
            if (dists[node] > cost) {
                dists[node] = cost;
                pq.push({node, cost});
            }
        }
    }
}

int main() {
    // 입력
    cin >> n >> m;
    graph.resize(n+1);
    dists.resize(n+1);
    for (int i=0; i<n-1; i++) {
        int node1, node2, dist;
        cin >> node1 >> node2 >> dist;
        graph[node1].push_back({node2, dist});
        graph[node2].push_back({node1, dist});
    }

    while (m--) {
        int start_node, end_node;
        for (int i=1; i<=n; i++) {
            dists[i] = INF;
        }
        cin >> start_node >> end_node;
        dijkstra(start_node);
        cout << dists[end_node] << endl;
    }
}