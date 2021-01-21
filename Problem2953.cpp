#include <iostream>
using namespace std;

int main() {
    int winner = 0;
    int max = 0;
    for (int i=0; i<5; i++) {
        int num;
        int sum = 0;
        for (int j=0; j<4; j++) {
            cin >> num;
            sum += num;
        }
        if (sum>max) {
            winner = i+1;
            max = sum;
        }
    }
    cout << winner << " " << max;
}
