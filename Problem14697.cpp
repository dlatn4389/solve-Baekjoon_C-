#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int N; cin >> N;

    bool possible = false;
    for (int i=0; i<=N/A; i++) {
        for (int j=0; j<=N/B; j++) {
            for (int k=0; k<=N/C; k++) {
                int sum = i*A+j*B+k*C;
                if (sum==N) possible = true;
            }
        }
    }
    if (possible) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}
