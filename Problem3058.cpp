#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int input;
        int sum = 0, even = 102;
        for (int i=0; i<7; i++) {
            cin >> input;
            if (input%2==0) {
                sum += input;
                if (even>input) {
                    even = input;
                }
            }
        }
        cout << sum << " " << even << '\n';
    }
}