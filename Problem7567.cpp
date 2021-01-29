#include <iostream>
using namespace std;

int main() {
    string input; cin >> input;
    int answer = 10;
    for (int i=1; i<input.length(); i++) {
        if (input.at(i)=='(') {
            if (input.at(i-1)=='(') {
                answer += 5;
            }
            else {
                answer += 10;
            }
        }
        else {
            if (input.at(i-1)==')') {
                answer += 5;
            }
            else {
                answer += 10;
            }
        }
    }
    cout << answer;
}
