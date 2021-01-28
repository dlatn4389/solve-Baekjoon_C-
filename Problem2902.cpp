#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    for (char c : input) {
        if (c-'A'>=0 && c-'A'<=25) {
            cout << c;
        }
    }
}