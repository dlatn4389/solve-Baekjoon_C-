#include <iostream>
using namespace std;

int main() {
    char input[100];
    cin >> input;

    int answer = 1;
    for (char c : input) {
        if (c==',') {
            answer++;
        }
    }
    cout << answer;
}
