#include <iostream>
using namespace std;

int nums[91125];

int triNum(int n) {
    return n*(n+1)/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int index = 0;
    for (int i=1; i<=45; i++) {
        for (int j=1; j<=45; j++) {
            for (int k=1; k<=45; k++) {
                nums[index++] = triNum(i)+triNum(j)+triNum(k);
            }
        }
    }

    int T; cin >> T;

    while (T--) {
        int K; cin >> K;
        bool exist = false;
        for (int i : nums) {
            if (i==K) {
                cout << "1" << '\n';
                exist = true;
                break;
            }
        }
        if (!exist) {
            cout << 0 << '\n';
        }
    }
}
