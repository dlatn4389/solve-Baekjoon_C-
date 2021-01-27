#include <iostream>
using namespace std;

int main() {
    int N, F;
    cin >> N >> F;
    int answer;

    N = (N/100)*100;
    int newN;

    for (int i=0; i<=100; i++) {
        newN = N+i;
        if (newN%F==0) {
            answer = i;
            break;
        }
    }

    if (answer<10) {
        cout << 0 << answer;
        return 0;
    }
    cout << answer;
}
