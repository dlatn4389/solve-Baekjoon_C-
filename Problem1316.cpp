#include <iostream>
using namespace std;

bool alphabet_used[26];

string compress(string s) {
    char c = s.at(0);
    string answer = "";
    answer.push_back(c);

    for (int i=1; i<s.length(); i++) {
        if (s.at(i)!=c) {
            c = s.at(i);
            answer.push_back(c);
        }
    }

    return answer;
}

bool groupVoca(string s) {
    string compressed = compress(s);

    for (char c : compressed) {
        if (alphabet_used[c-'a']) {
            return false;
        }
        else {
            alphabet_used[c-'a'] = true;
        }
    }

    return true;
}

int main() {
    int N; cin >> N;

    int answer = 0;
    while (N--) {
        string input; cin >> input;
        if (groupVoca(input)) answer++;

        for (int i=0; i<26; i++) {
            alphabet_used[i] = false;
        }
    }

    cout << answer;
}
