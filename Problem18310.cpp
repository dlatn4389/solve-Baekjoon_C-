#include <iostream>
#include <algorithm>
using namespace std;

int houses[200001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    for (int i=0; i<N; i++) {
        cin >> houses[i];
    }

    sort(houses, houses+N);

    if (N%2==0) {
        cout << houses[N/2-1];
        return 0;
    }
    cout << houses[N/2];
}
