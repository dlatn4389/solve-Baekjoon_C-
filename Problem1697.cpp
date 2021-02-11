#include <iostream>
#include <queue>
using namespace std;

int line[100001] = {0,};
bool visited[100001];

void bfs(int v) {
    visited[v] = true;
    queue<int> q;
    q.push(v);

    while (!q.empty()) {
        int pos = q.front();
        q.pop();
        for (int i=0; i<3; i++) {
            int npos;
            if (i==0) npos = pos+1;
            else if (i==1) npos = pos-1;
            else if (i==2) npos = pos*2;

            if (npos<0 || npos>100000) continue;
            if (!visited[npos]) {
                visited[npos] = true;
                line[npos] = line[pos]+1;
                q.push(npos);
            }
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    bfs(N);
    cout << line[K];
}