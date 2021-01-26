#include <iostream>
using namespace std;

int main() {
    int frequency[26];
    for (int i=0; i<26; i++) {
        frequency[i] = -1;
    }
    string input;
    cin >> input;

    int index = 0;
    for (char c : input) {
        int ind = c-'a';
        if (frequency[ind]==-1) {
            frequency[ind] = index;
        }
        index++;
    }

    for (int i : frequency) {
        cout << i << " ";
    }
}
