#include <iostream>
using namespace std;

int N, M;
const int MAX = 9;

bool visited[MAX];

void combination(int start, int find) {
    if (find==M) {
        for (int i=1; i<=N; i++) {
            if (visited[i]) cout << i << " ";
        }
        cout << '\n';
        return;
    }

    for (int i=start; i<=N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            combination(i+1, find+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;

    combination(1, 0);
}
