#include <iostream>
using namespace std;

int pow(int p, int n) {
    int answer = 1;
    while (n--) {
        answer *= p;
    }
    return answer;
}

int main() {
    int N;
    cin >> N;
    int answer = pow(4, N) + pow(2, N+1) + 1;
    cout << answer;
}
