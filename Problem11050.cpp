#include <iostream>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    int answer = 1;

    for (int i=N; i>=N-K+1; i--) {
        answer *= i;
    }
    for (int i=1; i<=K; i++) {
        answer /= i;
    }
    cout << answer;
}
