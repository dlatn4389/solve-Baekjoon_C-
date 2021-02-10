#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            int input; cin >> input;
            matrix[i][j] += input;
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}
