#include <iostream>
using namespace std;

int abs(int k) {
    if (k<0) return -k;
    return k;
}

int main() {
    int freq1[26]={0,}; int freq2[26]={0,};
    string input1, input2;
    cin >> input1 >> input2;

    for (char c : input1) {
        freq1[c-'a']++;
    }
    for (char c : input2) {
        freq2[c-'a']++;
    }

    int answer = 0;
    for (int i=0; i<26; i++) {
        answer += abs(freq1[i]-freq2[i]);
    }
    cout << answer;
}
