#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long candy;
        long long remain = 0;
        for (int i=0; i<N; i++) {
            cin >> candy;
            remain += candy%N;
        }
        if (remain%N==0) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << '\n';
    }
}
