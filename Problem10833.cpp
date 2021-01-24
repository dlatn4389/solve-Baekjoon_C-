#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int sum = 0;
    int input_num, apple;

    while (N--) {
        cin >> input_num >> apple;
        sum += apple%input_num;
    }
    cout << sum;
}
