#include <iostream>
using namespace std;

int main() {
    int N; string input;
    cin >> N;

    cin.ignore();
    while (N--) {
        getline(cin, input);
        if (input.at(0)>='a' && input.at(0)<='z') {
            input.at(0) = input.at(0)-'a'+'A';
        }
        cout << input << '\n';
    }
}
