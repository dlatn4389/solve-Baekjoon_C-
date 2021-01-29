#include <iostream>
using namespace std;

int main() {
    bool submitted[31];
    for (int i=0; i<31; i++) {
        submitted[i] = false;
    }
    for (int i=0; i<28; i++) {
        int input; cin >> input;
        submitted[input] = true;
    }
    for (int i=1; i<=30; i++) {
        if (!submitted[i]) {
            cout << i << '\n';
        }
    }
}
