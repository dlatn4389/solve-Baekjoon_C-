#include <iostream>
using namespace std;
#include <vector>

// 0: +, 1: -, 2: *, 3: /
int array[4] = {0,};
vector<int> nums;

int MAX = -999999999;
int MIN = 999999999;

int getVal(int done, int result, int command) {
    if (command==0) {
        result += nums[done+1];
    }
    else if (command==1) {
        result -= nums[done+1];
    }
    else if (command==2) {
        result *= nums[done+1];
    }
    else if (command==3) {
        result /= nums[done+1];
    }
    return result;
}

void simulation(int done, int result) {
    if (done==nums.size()-1) {
        if (result>MAX) {
            MAX = result;
        }
        if (MIN>result) {
            MIN = result;
        }
        return;
    }

    for (int i=0; i<4; i++) {
        if (array[i]>0) {
            array[i]--;
            simulation(done+1, getVal(done, result, i));
            array[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        int i; cin >> i;
        nums.push_back(i);
    }
    for (int i=0; i<4; i++) {
        cin >> array[i];
    }

    simulation(0, nums[0]);

    cout << MAX << '\n' << MIN;
}