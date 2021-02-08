#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M;
    int matrixA[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> matrixA[i][j];
        }
    }
    cin >> M >> K;
    int matrixB[M][K];
    for (int i=0; i<M; i++) {
        for (int j=0; j<K; j++) {
            cin >> matrixB[i][j];
        }
    }

    int matrixC[N][K];
    for (int i=0; i<N; i++) {
        for (int j=0; j<K; j++) {
            int value = 0;
            for (int k=0; k<M; k++) {
                value += matrixA[i][k] * matrixB[k][j];
            }
            cout << value << " ";
        }
        cout << '\n';
    }


}
