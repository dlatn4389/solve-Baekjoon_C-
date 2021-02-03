#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    bool minExist = false;

    int min = 10000;
    for (int i=N/5; i>=0; i--) {
        for (int j=0; j<=N/3; j++) {
            int sum = 5*i+3*j;
            if (sum==N) {
                min = i+j;
                minExist = true;
                break;
            }
        }
        if (minExist) break;
    }
    if (!minExist) {
        min = -1;
    }
    cout << min;
}
