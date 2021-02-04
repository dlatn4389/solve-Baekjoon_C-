#include <iostream>
using namespace std;

int square(int n) {
    return n*n;
}

int main() {
    int M, N; cin >> M >> N;
    int sum = 0; int min = 9999999;

    for (int i=1; i<101; i++) {
        int squareNum = square(i);
        if (squareNum>=M && squareNum<=N) {
            sum += squareNum;
            if (min==9999999) {
                min = squareNum;
            }
        }
    }
    if (sum==0) {
        cout << -1;
    }
    else {
        cout << sum << '\n' << min;
    }
}
