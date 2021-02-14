#include <iostream>
using namespace std;

int main() {
    char input[10];
    cin >> input;

    //Insertion Sort
    for (int i=1; input[i]!=0; i++) {
        for (int j=i; j>0; j--) {
            if (input[j]>input[j-1]) {
                swap(input[j], input[j-1]);
            }
        }
    }

    cout << input;
}
