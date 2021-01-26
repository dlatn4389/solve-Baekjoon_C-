#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string A_str = to_string(A);
    string B_str = to_string(B);
    reverse(A_str.begin(), A_str.end());
    reverse(B_str.begin(), B_str.end());
    A = stoi(A_str); B = stoi(B_str);

    if (A>B) {
        cout << A;
        return 0;
    }
    cout << B;
}
