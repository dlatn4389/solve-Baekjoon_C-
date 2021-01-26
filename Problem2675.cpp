#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int R; string input; int index=0;
        char result[200];
        cin >> R >> input;

        for (char c : input) {
            for (int i=0; i<R; i++) {
                result[index++] = c;
            }
        }
        result[index] = 0;
        cout << result << '\n';
    }
}
