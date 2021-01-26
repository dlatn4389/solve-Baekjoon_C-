#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int index = 0;

    for (int i=0; i<input.length(); i++) {
        cout << input.at(i);
        index++;
        if (index%10==0) {
            cout << '\n';
        }
    }
}
