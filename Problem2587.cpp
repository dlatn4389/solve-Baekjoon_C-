#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[5];
    for (int i=0; i<5; i++) {
        cin >> nums[i];
    }
    int avg, mid; int sum = 0;
    sort(nums, nums+5);
    for (int i=0; i<5; i++) {
        sum += nums[i];
    }
    avg = sum/5; mid = nums[2];
    cout << avg << '\n' << mid;
}
