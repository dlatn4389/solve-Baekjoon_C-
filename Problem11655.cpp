#include <iostream>
using namespace std;

char ROT13(char c) {
    if (c>='a' && c<='z') {
        c += 13;
        if (c>'z' || c<0) {
            c -= 26;
        }
    }
    else if (c>='A' && c<='Z') {
        c += 13;
        if (c>'Z') {
            c-=26;
        }
    }
    return c;
}

int main() {
    string input;
    getline(cin, input);

    for (char c : input) {
        cout << ROT13(c);
    }
}
