#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string input;
        cin >> input;
        int sum = (input.at(0)-'0') + (input.at(2)-'0');
        cout << sum << '\n';
    }
}
