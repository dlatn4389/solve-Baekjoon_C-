#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> mushes;
    int mush;
    for (int i=0; i<10; i++) {
        cin >> mush;
        mushes.push(mush);
    }
    int sum = 0;
    for (int i=0; i<10; i++) {
        int nsum = sum+mushes.front();
        if (nsum<=100) {
            sum = nsum;
            mushes.pop();
        }
        else if (nsum>100) {
            break;
        }
    }

    if (!mushes.empty()) {
        int nsum = sum+mushes.front();
        if ((nsum-100)<=(100-sum)) {
            sum = nsum;
            mushes.pop();
        }
    }
    cout << sum;
}
