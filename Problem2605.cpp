#include <iostream>
using namespace std;

int nums[200];

int main() {
    int N; cin >> N;
    for (int i=0; i<200; i++) {
        nums[i] = 0;
    }
    for (int index=0; index<N; N++) {
        int input; cin >> input;
        while (true) {
            if (nums[index+100-input]!=0) {
                input += 1;
            }
            else {
                nums[index+100-input]
            }
        }
    }
}