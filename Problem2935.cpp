#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string A, operate, B;
    cin >> A;
    cin >> operate;
    cin >> B;

    if (B.length()>A.length()) {
        swap(A, B);
    }
    string answer = A;
    if (operate=="*") {
        for (int i=0; i<B.length()-1; i++) {
            answer.push_back('0');
        }
    }
    else if (operate=="+") {
        if (A.length()==B.length()) {
            answer.at(0) = '2';
        }
        else {
            answer.at(A.length()-B.length()) = '1';
        }
    }
    cout << answer;
}