#include <iostream>
using namespace std;

int charToInt(char c) {
    if (c=='1') {
        return 1;
    }
    if (c-'W'>=0) {
        return 9;
    }
    else if (c-'T'>=0) {
        return 8;
    }
    else if (c-'P'>=0) {
        return 7;
    }
    else if (c-'M'>=0) {
        return 6;
    }
    else if (c-'J'>=0) {
        return 5;
    }
    else if (c-'G'>=0) {
        return 4;
    }
    else if (c-'D'>=0) {
        return 3;
    }
    else if (c-'A'>=0) {
        return 2;
    }
}

int main() {
    string input;
    cin >> input;

    int answer = 0;
    for (char c : input) {
        int value = charToInt(c);
        answer += (++value);
    }
    cout << answer;
}
