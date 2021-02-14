#include <iostream>
using namespace std;

int array[2000001] = {0,};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    while (N--) {
        int i; cin >> i;
        array[i+1000000]++;
    }

    for (int i=0; i<=2000000; i++) {
        if (array[i]>0) {
            cout << i-1000000 << '\n';
        }
    }
}
