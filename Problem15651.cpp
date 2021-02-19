#include <iostream>
using namespace std;

const int MAX = 8;

int N, M;

bool visit[MAX][MAX];

void permutation_of_repetition(int find) {
    if (find==M) {
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                if (visit[i][j]) {
                    cout << j << " ";
                }
            }
        }
        cout << '\n';
        return;
    }

    for (int j=1; j<=N; j++) {
        if (!visit[find+1][j]) {
            visit[find+1][j] = true;
            permutation_of_repetition(find+1);
            visit[find+1][j] = false;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    permutation_of_repetition(0);
}
