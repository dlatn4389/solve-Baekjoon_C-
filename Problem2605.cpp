#include <iostream>
using namespace std;

int nums[200];

int main() {
    int N; cin >> N;
    int nums[N];

    for (int i=0; i<N; i++) {
        int input; cin >> input;

        int index = 0;
        int save[N];
        for (int j=0; j<N; j++) {
            save[j] = nums[j];
        }
        for (int j=0; j<N; j++) {
            if (j==i-input) nums[j] = i+1;
            else {
                nums[j] = save[index];
                index++;
            }
        }
        /*for (int i : nums) {
            cout << i << " ";
        }
        cout << '\n';*/
    }
    for (int i : nums) {
        cout << i << " ";
    }
}