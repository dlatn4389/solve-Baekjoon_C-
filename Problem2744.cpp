#include <iostream>
using namespace std;

char lowerToUpper(char c) {
    return c-32;
}

char upperToLower(char c) {
    return c+32;
}

char converter(char c) {
    if (c-'a'>=0) {
        return lowerToUpper(c);
    }
    return upperToLower(c);
}

int main() {
    string input; cin >> input;

    string answer = "";
    for (char c : input) {
        answer.push_back(converter(c));
    }
    cout << answer;
}
