#include <iostream>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    int answer = 0;

    while (true) {
        N-=2;
        M-=1;
        if (N<0) {
            break;
        }
        if (M<0) {
            break;
        }
        if ((N+M)<K) {
            break;
        }
        answer+=1;
    }
    cout << answer;
}
