#include <iostream>
using namespace std;

int main() {
    int answer = 0; string input;
    for (int i=0; i<8; i++) {
        cin >> input;
        if (i%2==0) {
            for (int j=0; j<input.length(); j++) {
                if (j%2==0) {
                    if (input.at(j)=='F') {
                        answer++;
                    }
                }
            }
        }
        else {
            for (int j=0; j<input.length(); j++) {
                if (j%2==1) {
                    if (input.at(j)=='F') {
                        answer++;
                    }
                }
            }
        }
    }
    cout << answer;
}
