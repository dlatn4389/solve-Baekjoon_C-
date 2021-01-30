#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int start=99999, end=-1;
    int max = 0;
    for (int i=0; i<N; i++) {
        int input; cin >> input;
        if (i==0) {
            start = input;
        }
        else {
            if (input<=end) {
                if (end-start>max) {
                    max = end-start;
                }
                start = input;
                end = -1;
            }
            else {
                if (input<=start) {
                    start = input;
                    end = -1;
                }
                else {
                    end = input;
                    if (i==N-1 && end-start>max) {
                        max = end-start;
                    }
                }
            }
        }
    }
    cout << max;
}
