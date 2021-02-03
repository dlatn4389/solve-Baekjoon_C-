#include <iostream>
using namespace std;;

int main() {
    int N; cin >> N;

    int count = 0;

    int original = N;
    while (true) {
        int newN = (N%10)*10+(N/10+N%10)%10;
        count++;
        if (newN==original) {
            break;
        }
        N = newN;
    }
    cout << count;
}
