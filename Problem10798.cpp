#include <iostream>
using namespace std;

int main() {
    string inputs[5];
    for (int i=0; i<5; i++) {
        cin >> inputs[i];
    }
    for (int j=0; j<15; j++) {
        for (int i=0; i<5; i++) {
            if (j<inputs[i].length()) {
                cout << inputs[i].at(j);
            }
        }
    }
}
