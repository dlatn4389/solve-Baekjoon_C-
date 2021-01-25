#include <iostream>
using namespace std;

int main() {
    int N;
    string input;
    cin >> N;
    cin >> input;
    int sum = 0;

    for (int i=0; i<N; i++) {
        sum += stoi(string(1, input.at(i)));
    }
    cout << sum;
}
