#include <iostream>
using namespace std;

int alphabets[26] = {0, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    string input;

    while (N--) {
        cin >> input;
        alphabets[input.at(0)-'a']++;
    }

    string answer = "";
    for (int i=0; i<26; i++) {
        if (alphabets[i]>=5) {
            answer.push_back(i+'a');
        }
    }

    if (answer=="") {
        cout << "PREDAJA";
        return 0;
    }
    cout << answer;
}