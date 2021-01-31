#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int T; cin >> T;

    while (T--) {
        int index; string input;
        cin >> index >> input;

        string answer = ""; int ind = 1;
        for (char c : input) {
            if (ind!=index) {
                answer.push_back(c);
            }
            ind++;
        }
        cout << answer << '\n';
    }
}
