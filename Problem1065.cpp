#include <iostream>
using namespace std;

int isHanNum(int k) {
    if (k<100) return true;
    string num = to_string(k);
    int sub = num.at(1)-num.at(0);
    for (int i=0; i<num.length()-1; i++) {
        if (sub!=num.at(i+1)-num.at(i)) return false;
    }
    return true;
}

int main() {
    int X; cin >> X;

    int answer = 0;
    for (int i=1; i<=X; i++) {
        if (isHanNum(i)) answer++;
    }

    cout << answer;
}
