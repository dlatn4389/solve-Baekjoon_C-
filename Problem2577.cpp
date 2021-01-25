#include <iostream>
using namespace std;

int main() {
    long long mul;
    int A, B, C;
    cin >> A >> B >> C;
    mul = A*B*C;
    string str = to_string(mul);
    int nums[10];

    for (int i=0; i<10; i++) {
        nums[i] = 0;
    }

    for (int i=0; i<str.length(); i++) {
        nums[str.at(i)-'0']++;
    }
    for (int i : nums) {
        cout << i << '\n';
    }
}
