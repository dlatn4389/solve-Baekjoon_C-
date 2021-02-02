#include <iostream>
using namespace std;

int main() {
    int e, f, c; cin >> e >> f >> c;

    int answer = 0;
    int empty_bottle = e+f;
    int new_bottle = (e+f)/c;
    answer += new_bottle;

    while (true) {
        empty_bottle -= new_bottle*c;
        empty_bottle += new_bottle;
        if (empty_bottle<c) break;

        new_bottle = empty_bottle/c;
        answer += new_bottle;
    }
    cout << answer;
}
