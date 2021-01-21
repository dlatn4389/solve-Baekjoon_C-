#include <iostream>
using namespace std;

int C(int n, int r) {
    int answer = 1;
    for (int i=0; i<3; i++) {
        answer *= (n-i);
    }
    for (int i=1; i<=r; i++) {
        answer /= i;
    }
    return answer;
}

int H(int n, int r) {
    return C(n+r-1, r);
}

int main() {
    int N;
    cin >> N;
    int answer = 0;

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=i; j++) {
            answer += (i+j);
        }
    }
    cout << answer;
}
