#include <iostream>
using namespace std;

int alphabets[26] = {0,};

char lowerToUpper(char c) {
    return c-'a'+'A';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    char input[1000001];
    cin >> input;

    for (int i=0; input[i]!=0; i++) {
        if (input[i]>='a'&&input[i]<='z') {
            input[i] = lowerToUpper(input[i]);
        }
        alphabets[input[i]-'A']++;
    }

    int maxIndex = 0; int maxCount = 0;
    for (int i=0; i<26; i++) {
        if (alphabets[i]>alphabets[maxIndex]) {
            maxIndex = i;
            maxCount = 1;
        }
        else if (alphabets[i]==alphabets[maxIndex]) {
            maxCount++;
        }
    }

    if (maxCount!=1) {
        cout << "?"; return 0;
    }
    char c = maxIndex+'A';
    cout << c;
}