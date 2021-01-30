#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int nums[N];
    for (int i=0; i<N; i++) {
        cin >> nums[i];
    }
    int v; cin >> v;

    int answer = 0;
    for (int i : nums) {
        if (i==v) {
            answer++;
        }
    }
    cout << answer;
}
