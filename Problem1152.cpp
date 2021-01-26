#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    int answer = 0;
    for (int i=0; i<input.length(); i++) {
        if (input.at(i)!=' ') {
            if (i==0) {
                answer++;
            }
            else {
                if (input.at(i-1)==' ') {
                    answer++;
                }
            }
        }
    }
    cout << answer;
}
