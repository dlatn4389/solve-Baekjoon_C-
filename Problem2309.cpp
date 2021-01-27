#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ind1, ind2;
    int heights[9];
    for (int i=0; i<9; i++) {
        cin >> heights[i];
    }
    sort(heights, heights+9);
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<9; j++) {
            int sum = 0;
            for (int k=0; k<9; k++) {
                if (k!=i && k!=j) {
                    sum += heights[k];
                }
            }
            if (sum==100) {
                ind1 = i;
                ind2 = j;
                break;
            }
        }
    }
    for (int i=0; i<9; i++) {
        if (i!=ind1 && i!=ind2) {
            cout << heights[i] << '\n';
        }
    }
};
