#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int shorts[9];
    for (int i=0; i<9; i++) {
        cin >> shorts[i];
    }

    int index1 = -1, index2 = -1;
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<9; j++) {
            int sum = 0;
            for (int k=0; k<9; k++) {
                if (k!=i && k!=j) {
                    sum += shorts[k];
                }
            }
            if (sum==100) {
                index1 = i; index2 = j;
                break;
            }
        }
        if (index1!=-1 && index2!=-1) {
            break;
        }
    }
    for (int i=0; i<9; i++) {
        if (i!=index1 && i!=index2) {
            cout << shorts[i] << '\n';
        }
    }
}
