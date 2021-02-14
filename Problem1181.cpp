#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> strs;

bool compare(string s1, string s2) {
    if (s1.length()!=s2.length()) {
        return s1.length()<s2.length();
    }
    return s1<s2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    while (N--) {
        string input; cin >> input;
        strs.push_back(input);
    }

    sort(strs.begin(), strs.end(), compare);

    string temp;
    for (string s: strs) {
        if (s==temp) continue;
        cout << s << '\n';
        temp = s;
    }
}
