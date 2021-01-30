#include <iostream>
#include <algorithm>
using namespace std;

int charToInt(char c, int A, int B, int C) {
    if (c=='A') {
        return A;
    }
    else if (c=='B') {
        return B;
    }
    return C;
}

int main() {
    int nums[3];
    for (int i=0; i<3; i++) {
        cin >> nums[i];
    }
    sort(nums, nums+3);
    int A = nums[0], B = nums[1], C = nums[2];

    string input; cin >> input;
    for (char c :input) {
        cout << charToInt(c, A, B, C) << " ";
    }
}
