#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, B;
    stack<int> nums;
    cin >> N >> B;

    while (1) {
        if (N==0) break;
        nums.push(N%B);
        N /= B;
    }

    while (!nums.empty()) {
        char c;
        if (nums.top()<10) {
            c = '0'+nums.top();
        }
        else {
            c = 'A'-10+nums.top();
        }
        cout << c;
        nums.pop();
    }
}