#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    while (getline(cin, input)) {
        if (input=="END") {
            break;
        }
        reverse(input.begin(), input.end());
        cout << input << '\n';
    }
}
