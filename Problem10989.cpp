#include <iostream>
using namespace std;

int array[10001] = {0,};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    while (N--) {
        int i; cin >> i;
        array[i]++;
    }

    for (int i=1; i<=10000; i++) {
        for (int j=0; j<array[i]; j++) {
            cout << i << '\n';
        }
    }
}
