#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<2*N-1; j++) {
            if (j<i) {
                cout << " ";
            }
            else if (j==2*N-1-i) {
                break;
            }
            else {
                cout << "*";
            }
        }
        cout << '\n';
    }
}
