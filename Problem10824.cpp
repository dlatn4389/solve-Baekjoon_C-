#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    string a = to_string(A)+to_string(B);
    string b = to_string(C)+to_string(D);
    long long answer = stol(a)+stol(b);
    cout << answer;
}
