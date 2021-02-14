#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int array[N];
    for (int i=0; i<N; i++) {
        cin >> array[i];
    }

    // Seletion Sort
    for (int i=0; i<N; i++) {
        int minIndex = i;
        for (int j=i+1; j<N; j++) {
            if (array[minIndex]>array[j]) {
                minIndex = j;
            }
        }
        swap(array[minIndex], array[i]);
    }

    for (int i: array) {
        cout << i << '\n';
    }
}
