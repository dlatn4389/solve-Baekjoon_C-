#include <iostream>
using namespace std;

int distance(char c1, char c2) {
    if (c2>=c1) {
        return c2-c1;
    }
    return (c2+26)-c1;
}

int main() {
    int T; cin >> T;

    while (T--) {
        string a, b; cin >> a >> b;
        int distances[a.length()];
        for (int i=0; i<a.length(); i++) {
            distances[i] = distance(a.at(i), b.at(i));
        }

        cout << "Distances: ";
        for (int i:distances) {
            cout << i << " ";
        }
        cout << '\n';
    }
}
