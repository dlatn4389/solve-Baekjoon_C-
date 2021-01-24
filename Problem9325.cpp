#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int s, n;
        cin >> s;
        cin >> n;
        int price = 0;
        int q, p;
        while (n--) {
            cin >> q >> p;
            price += q*p;
        }
        price += s;
        cout << price << '\n';
    }
}
