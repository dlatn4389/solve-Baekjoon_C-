#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int input;
        cin >> input;
        int Quarter, Dime, Nickel, Penny;
        Quarter = input/25;
        input -= 25*Quarter;
        Dime = input/10;
        input -= 10*Dime;
        Nickel = input/5;
        input -= 5*Nickel;
        Penny = input;
        cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << '\n';
    }
}
