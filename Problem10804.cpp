#include <iostream>
using namespace std;

int main() {
    int nums[20];
    for (int i=0; i<20; i++) {
        nums[i] = i+1;
    }

    int N = 10;
    while (N--) {
        int start, end; cin >> start >> end;
        int length = end-start+1;

        int newNums[length]; int index = 0;
        for (int i=end-1; i>=start-1; i--) {
            newNums[index++] = nums[i];
        }
        index = 0;
        for (int i=start-1; i<=end-1; i++) {
            nums[i] = newNums[index++];
        }
    }

    for (int i : nums) {
        cout << i << " ";
    }
}
