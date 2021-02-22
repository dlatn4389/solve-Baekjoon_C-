#include <iostream>
using namespace std;

int array[1000001];

int main() {
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;

    for (int i=3; i<=1000000; i++) {
        array[i] = (array[i-2]+array[i-1])%15746;
    }

    int N; cin >> N;
    cout << array[N];
}
