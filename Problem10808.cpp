#include <iostream>
using namespace std;

int main() {
    int alphabets[26] = {0, };
    string input;
    cin >> input;

    for (char c : input) {
        alphabets[c-'a']++;
    }

    for (int i : alphabets) {
        cout << i << " ";
    }
}
