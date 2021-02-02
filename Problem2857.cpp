#include <iostream>
using namespace std;

int main() {
    bool exist = false;

    for (int i=0; i<5; i++) {
        string input; cin >> input;
        for (int j=0; j<input.length()-2; j++) {
            if (input.at(j)=='F') {
                if (input.at(j+1)=='B' && input.at(j+2)=='I') {
                    exist = true;
                    cout << i+1 << " ";
                    break;
                }
            }
        }
    }
    if (!exist) {
        cout << "HE GOT AWAY!";
    }
}
