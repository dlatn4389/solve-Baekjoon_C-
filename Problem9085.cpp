#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int sum = 0;
        while (N--) {
            int input;
            cin >> input;
            sum += input;
        }
        cout << sum << '\n';
    }
}
