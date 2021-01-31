#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;

    while (N--) {
        string input; cin >> input;
        cout << input.at(0) << input.at(input.length()-1) << '\n';
    }
}
