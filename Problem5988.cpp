#include <iostream>
using namespace std;

string evenOrodd(char c) {
    int n = c-'0';
    if (n%2==0) {
        return "even";
    }
    return "odd";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N; cin >> N;
    while (N--) {
        string input; cin >> input;
        cout << evenOrodd(input.at(input.length()-1)) << '\n';
    }
}
