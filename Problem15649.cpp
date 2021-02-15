#include <iostream>
using namespace std;

int N, M;
bool* visited;
int* array;

void purmutation(int chosen) {
    if (chosen==M) {
        for (int i=0; i<M; i++) {
            cout << array[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i=1; i<=N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            array[chosen] = i;
            purmutation(chosen+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;

    visited = new bool[N+1];
    array = new int[M];
    for (int i=1; i<=N; i++) {
        visited[i] = false;
    }

    purmutation(0);
}