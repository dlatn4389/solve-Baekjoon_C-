#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=0; i<2*N; i++) {
        int oddLineCount = 0, evenLineCount = 0;
        for (int j=0; j<N; j++) {
            if (i%2==1) {
                if (j%2==0) {
                    cout << " ";
                }
                else {
                    cout << "*";
                    oddLineCount++;
                    if (oddLineCount==N/2) {
                        break;
                    }
                }
            }
            else {
                if (j%2==0) {
                    cout << "*";
                    evenLineCount++;
                    if (evenLineCount==(N+1)/2) {
                        break;
                    }
                }
                else {
                    cout << " ";
                }
            }
        }
        oddLineCount = 0, evenLineCount = 0;
        cout << '\n';
    }
}
