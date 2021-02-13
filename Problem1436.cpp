#include <iostream>
using namespace std;

int deathNums[10001];

bool isdeathNum(int n) {
    string num = to_string(n);
    for (int i=0; i+2<num.length(); i++) {
        if (num.substr(i, 3)=="666") {
            return true;
        }
    }
    return false;
}

int main() {
    int index = 1;

    for (int i=0; i<1000000000; i++) {
        if (isdeathNum(i)) {
            deathNums[index++] = i;
        }
        if (index>10000) break;
    }

    int N; cin >> N;
    cout << deathNums[N] << " " << deathNums[10000];
}
