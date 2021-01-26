#include <iostream>
#include <vector>
using namespace std;

bool contain(vector<int> remain, int value) {
    for (int i : remain) {
        if (i==value) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> remain;
    int input;

    for (int i=0; i<10; i++) {
        cin >> input;
        int value = input%42;
        if (!contain(remain, value)) {
            remain.push_back(value);
        }
    }
    cout << remain.size();
}
