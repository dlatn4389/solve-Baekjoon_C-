#include <iostream>
using namespace std;

int trinum(int n) {
    return n*(n+1)/2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int answer = 0;

        for (int i=1; i<=n; i++) {
            answer += i*trinum(i+1);
        }
        cout << answer << '\n';
    }
}
