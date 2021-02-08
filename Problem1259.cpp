#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int input;
    while (true) {
        cin >> input;
        if (input==0) {
            break;
        }
        string input_string = to_string(input);
        reverse(input_string.begin(), input_string.end());
        int reversed = stoi(input_string);
        if (input==reversed) {
            cout << "yes";
        }
        else {
            cout << "no";
        }
        cout << '\n';
    }
}
