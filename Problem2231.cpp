#include <iostream>
using namespace std;

void getAns(int);

int main() {
    int N; cin >> N;
    getAns(N);
}

void getAns(int N) {
    for (int i=1; i<N; i++) {
        string num = to_string(i);
        int sum = i;
        for (char c : num) {
            sum += c-'0';
        }
        if (sum==N) {
            cout << i;
            return;
        }
    }
    cout << 0;
}