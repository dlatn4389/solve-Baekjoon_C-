#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int r, e, c;

    while (N--) {
        cin >> r >> e >> c;
        int revenue_notAdvertise = r;
        int revenue_Advertise = e-c;
        if (revenue_notAdvertise>revenue_Advertise) {
            cout << "do not advertise\n";
        }
        else if (revenue_Advertise>revenue_notAdvertise) {
            cout << "advertise\n";
        }
        else {
            cout << "does not matter\n";
        }
    }
}
