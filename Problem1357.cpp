#include <iostream>
#include <algorithm>
using namespace std;

int REV(int x) {
    string string_x = to_string(x);
    reverse(string_x.begin(), string_x.end());
    int reversed = stoi(string_x);
    return reversed;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    int sum = REV(X)+REV(Y);
    cout << REV(sum);
}
