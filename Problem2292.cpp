#include <iostream>
using namespace std;

long long where(int N) {
    return 3*N*N-3*N+1;
}

int main() {
    int N;
    cin >> N;

    if (N==1) {
        cout << 1;
        return 0;
    }

    int i = 1;
    int answer;
    while (true) {
        if (where(i)<N && N<=where(i+1)) {
            answer = i+1;
            break;
        }
        i++;
    }
    cout << answer;
}
