#include <iostream>
using namespace std;

string compareString(string s1, string s2) {
    int length = s1.length();
    string answer = "";

    for (int i=0; i<length; i++) {
        if (s1.at(i)==s2.at(i)) {
            answer.push_back(s1.at(i));
        }
        else {
            answer.push_back('?');
        }
    }
    return answer;
}

int main() {
    int N; cin >> N;
    string inputs[N];

    for (int i=0; i<N; i++) {
        cin >> inputs[i];
    }

    string answer = inputs[0];
    for (int i=1; i<N; i++) {
        answer = compareString(answer, inputs[i]);
    }

    cout << answer;
}
