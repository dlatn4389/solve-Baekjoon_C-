#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count0 = 0, count1 = 0;
    int input;
    while (N--) {
        cin >> input;
        if (input==1) {
            count1++;
        }
        else {
            count0++;
        }
    }
    if (count1>count0) {
        cout << "Junhee is cute!";
        return 0;
    }
    cout << "Junhee is not cute!";
}
