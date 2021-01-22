#include <iostream>
using namespace std;

int min(int, int);
int max(int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int input;
        int minNum = 1000001, maxNum = -1000001;
        while (N--) {
            cin >> input;
            minNum = min(minNum, input);
            maxNum = max(maxNum, input);
        }
        cout << minNum << " " << maxNum << '\n';
    }
}

int min(int a, int b) {
    if (a>b) return b;
    return a;
}
int max(int a, int b) {
    if (a>b) return a;
    return b;
}