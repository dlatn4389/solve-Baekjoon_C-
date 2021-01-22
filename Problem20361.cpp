#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, X, K;
    cin >> N >> X >> K;
    int cups[N];
    for (int i=0; i<N; i++) {
        cups[i] = 0;
    }
    cups[X-1] = 1;
    while (K--) {
        int one, two;
        cin >> one >> two;
        swap(cups[one-1], cups[two-1]);
        /*for (int i : cups) {
            cout << i << " ";
        }
        cout << '\n';*/
    }
    for (int i=0; i<N; i++) {
        if (cups[i]==1) {
            cout << i+1;
            break;
        }
    }
}
