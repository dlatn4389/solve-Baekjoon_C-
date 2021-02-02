#include <iostream>
using namespace std;

int main() {
    char input[10001]; cin >> input;

    int answer1 = 0; int answer2 = 0;
    for (int i=0; input[i]!='\0'; i++) {
        if (input[i]=='J') {
            if (input[i+1]==0 || input[i+2]==0) {
                break;
            }
            else {
                if (input[i+1]=='O' && input[i+2]=='I') {
                    answer1++;
                }
            }
        }
        if (input[i]=='I') {
            if (input[i+1]==0 || input[i+2]==0) {
                break;
            }
            else {
                if (input[i+1]=='O' && input[i+2]=='I') {
                    answer2++;
                }
            }
        }
    }
    cout << answer1 << '\n' << answer2;
}
