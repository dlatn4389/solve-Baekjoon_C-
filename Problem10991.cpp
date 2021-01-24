#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        int count = 0;
        for (int j=0; j<2*N-1; j++) {
            if (j<N-1-i) {
                cout << " ";
            }
            else if (j>N-1+i) {
                break;
            }
            else {
                if (count%2==0) {
                    cout << "*";
                    count++;
                }
                else {
                    cout << " ";
                    count++;
                }
            }
        }
        cout << '\n';
    }
}
