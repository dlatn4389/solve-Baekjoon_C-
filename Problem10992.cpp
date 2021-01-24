#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        if (i==N-1) {
            for (int j=0; j<2*N-1; j++) {
                cout << "*";
            }
            break;
        }
        for (int j=0; j<2*N-1; j++) {
            if (j==N-1-i||j==N-1+i) {
                cout << "*";
            }
            else if (j==N+i) {
                break;
            }
            else {
                cout << " ";
            }
        }
        cout << '\n';
    }
}
