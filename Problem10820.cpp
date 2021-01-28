#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;

    while (getline(cin, input)) {
        int lowercaseNum = 0, uppercaseNum = 0, numberNum = 0, blankNum = 0;
        for (char c : input) {
            if (c-'A'>=0 && c-'A'<=25) {
                uppercaseNum++;
            }
            else if (c-'a'>=0 && c-'a'<=25) {
                lowercaseNum++;
            }
            else if (c==' ') {
                blankNum++;
            }
            else if (c-'0'>=0 && c-'0'<=9) {
                numberNum++;
            }
        }
        cout << lowercaseNum << " " << uppercaseNum << " " << numberNum << " " << blankNum << '\n';
    }
}
