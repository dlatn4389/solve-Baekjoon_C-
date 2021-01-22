#include <iostream>
using namespace std;

void print(int, int);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        print(N, M);
        cout << '\n';
    }
}

void print(int N, int M) {
    if (N<12) {
        cout << -1;
        return;
    }
    if (M<4) {
        cout << -1;
        return;
    }
    int answer = 11*M+4;
    cout << answer;
}