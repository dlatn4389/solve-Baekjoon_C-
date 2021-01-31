#include <iostream>
using namespace std;

bool erase(char c) {
    if (c=='C' || c=='A' || c=='M' || c=='B' || c=='R' || c=='I' || c=='D' || c=='G' || c=='E') return true;
    return false;
}

int main() {
    string input; cin >> input;

    string answer = "";
    for (char c :input) {
        if (!erase(c)) {
            answer.push_back(c);
        }
    }
    cout << answer;
}
