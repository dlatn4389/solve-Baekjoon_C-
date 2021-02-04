#include <iostream>
using namespace std;

bool falindrom(string s) {
    int length = s.length();
    for (int i=0; i<length/2; i++) {
        if (s.at(i)!=s.at(length-1-i)) {
            return false;
        }
    }
    return true;
}

int main() {
    string input; cin >> input;
    cout << falindrom(input);
}
