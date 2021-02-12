#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    int answer = word.length();

    for (int i=0; i<word.length(); i++) {
        if (word.at(i)=='=') {
            char c = word.at(i-1);
            if (i>=2) {
                if (word.at(i-2)=='d' && word.at(i-1)=='z') {
                    answer-=2;
                    continue;
                }
            }
            if (c=='c' || c=='s' || c=='z') {
                answer--;
                continue;
            }
        }
        else if (word.at(i)=='-') {
            char c = word.at(i-1);
            if (c=='c' || c=='d') {
                answer--;
            }
        }
        else if (word.at(i)=='j' && i>=1) {
            char c = word.at(i-1);
            if (c=='l' || c=='n') answer--;
        }
    }

    cout << answer;
}
