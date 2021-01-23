#include <iostream>
using namespace std;

int main() {
    int N, W, H;
    cin >> N >> W >> H;
    int L;

    while (N--) {
        cin >> L;
        if (L*L<=(H*H+W*W)) {
            cout << "DA" << '\n';
        }
        else {
            cout << "NE" << '\n';
        }
    }
}
