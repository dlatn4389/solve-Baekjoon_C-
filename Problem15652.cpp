#include <iostream>
using namespace std;

int N, M;
const int MAX = 9;

int array[MAX];

void combination_with_repetition(int start, int find) {
    if (find==M) {
        for (int i=1; i<=M; i++) {
            cout << array[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i=start; i<=N; i++) {
        array[find+1] = i;
        combination_with_repetition(i, find+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    combination_with_repetition(1, 0);
}
