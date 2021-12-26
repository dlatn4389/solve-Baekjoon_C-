#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>
#include <queue>

// 정점의 개수
int v;
// 간선의 개수
int e;
// 시작 정점의 번호
int start_node;

vector<vector<pair<int, int>>> graph;

// 거리 정보를 담는 배열
vector<int> dist_from_start;

// 노드와 노드가 연결되지 않았음을 나타내는 값
const int INF = 987654321;

// 우선순위 큐 정렬에 사용할 구조체
// pair<int, int> p의 first는 노드, second는 dist를 나타냄
// 먼저 dist가 작은 것이 우선에 오도록 설정하고, dist가 같으면 번호가 작은 것이 우선에 오도록 설정
struct cmp {
    bool operator() (pair<int, int> p1, pair<int, int> p2) {
        if (p1.second==p2.second) {
            return p1.first>p2.first;
        }
        return p1.second>p2.second;
    }
};

void dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({start_node, 0});
    dist_from_start[start_node] = 0;

    while (!pq.empty()) {
        // 우선순위 큐에서 가장 작은 거리를 가진 값을 꺼냄
        int now_node = pq.top().first;
        int now_dist = pq.top().second;
        pq.pop();

        // dist_from_start[now_node]의 값이 이미 갱신되었는지 확인
        // now_dist의 값이 더 클 경우, 이미 테이블의 값은 갱신되었으나 우선순위 큐 내부에만 남아있는 상황
        if (now_dist>dist_from_start[now_node]) continue;

        // 현재 노드와 연결된 노드를 탐색
        for (pair<int, int> p: graph[now_node]) {
            int node = p.first;
            int dist = p.second;

            int cost = dist + dist_from_start[now_node];
            // 만약 -> node의 비용이 -> now_node -> node 의 비용보다 비싸다면 갱신
            if (dist_from_start[node]>cost) {
                dist_from_start[node] = cost;
                // 우선순위 큐에 원소 추가
                pq.push({node, cost});
            }
        }
    }
}


int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 값 입력
    cin >> v >> e;
    cin >> start_node;

    graph.resize(v+1);
    dist_from_start.resize(v+1);

    for (int i=1; i<=v; i++) {
        dist_from_start[i] = INF;
    }

    // 간선의 정보 입력
    for (int i=0; i<e; i++) {
        int from, to, dist;
        cin >> from >> to >> dist;
        graph[from].push_back({to, dist});
    }

    dijkstra();

    // 문제의 조건에 따른 출력
    for (int i=1; i<=v; i++) {
        int dist = dist_from_start[i];
        if (dist==INF) {
            cout << "INF" << '\n';
        }
        else {
            cout << dist << '\n';
        }
    }
}