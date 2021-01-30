#include <iostream>
using namespace std;

char ChaisarToNormal(char c) {
    if (c=='A') {
        return 'X';
    }
    else if (c=='B') {
        return 'Y';
    }
    else if (c=='C') {
        return 'Z';
    }
    return c-3;
}

int main() {
    string input; cin >> input;
    for (char c : input) {
        cout << ChaisarToNormal(c);
    }
}
