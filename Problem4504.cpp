#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int input;
    while (true) {
        cin >> input;
        if (input==0) {
            break;
        }
        if (input%n==0) {
            cout << input << " is a multiple of " << n << ".";
        }
        else {
            cout << input << " is NOT a multiple of " << n << ".";
        }
        cout << '\n';
    }
}
