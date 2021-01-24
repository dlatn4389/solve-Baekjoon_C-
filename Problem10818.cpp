#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int input;
    int min = 1000001, max = -1000001;
    while (N--) {
        cin >> input;
        if (input>max) {
            max = input;
        }
        if (min>input) {
            min = input;
        }
    }
    cout << min << " " << max;
}
