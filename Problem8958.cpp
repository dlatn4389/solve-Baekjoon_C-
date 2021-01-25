#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    string input;
    getline(cin, input);
    while (T--) {
        int score = 0;
        int series = 0;
        getline(cin, input);
        for (int i=0; i<input.length(); i++) {
            if (input.at(i)=='O') {
                score += (++series);
            }
            else {
                series = 0;
            }
        }
        cout << score << '\n';
    }
}
