#include <iostream>
#include <algorithm>
using namespace std;

int charToInt(char c) {
    if (c=='-') return 0;
    if (c=='\\') return 1;
    if (c=='(') return 2;
    if (c=='@') return 3;
    if (c=='?') return 4;
    if (c=='>') return 5;
    if (c=='&') return 6;
    if (c=='%') return 7;
    if (c=='/') return -1;
}

long long pow(int num, int power) {
    long long answer = 1;
    for (int i=0; i<power; i++) {
        answer *= num;
    }
    return answer;
}

int main() {
    string str;
    long long answer;
    while (true) {
        answer = 0;
        cin >> str;
        if (str=="#") {
            break;
        }
        reverse(str.begin(), str.end());

        for (int i=0; i<str.length(); i++) {
            answer += charToInt(str[i])*pow(8, i);
        }
        cout << answer << '\n';
    }
}
