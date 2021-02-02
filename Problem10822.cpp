#include <iostream>
using namespace std;

int main() {
    char S[101];
    cin >> S;

    string str = "";
    int sum = 0;
    for (int i=0; i<101; i++) {
        if (S[i]!=',') {
            str.push_back(S[i]);
        }
        else {
            sum += stoi(str);
            str = "";
        }
        if (S[i]==0) {
            sum += stoi(str);
            break;
        }
    }
    cout << sum;
}
