#include <iostream>
#include <algorithm>
using namespace std;

bool end(int, int, int);

int main() {
    while (true) {
        int nums[3];
        for (int i=0; i<3; i++) {
            cin >> nums[i];
        }
        if (end(nums[0], nums[1], nums[2])) {
            break;
        }
        sort(nums, nums+3);
        if ((nums[2]*nums[2])==(nums[0]*nums[0]+nums[1]*nums[1])) {
            cout << "right";
        }
        else {
            cout << "wrong";
        }
        cout << '\n';
    }
}

bool end(int a, int b, int c) {
    if ((!a)&&(!b)&&(!c)) return true;
    return false;
}