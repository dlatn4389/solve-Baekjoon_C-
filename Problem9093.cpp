#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int T; cin >> T;

    cin.ignore();
    while (T--) {
        char input[1001];
        cin.getline(input, 1001);

        string splited = "";
        for (int i=0; i<1001; i++) {
            if (input[i]==' ') {
                reverse(splited.begin(), splited.end());
                cout << splited << " ";
                splited = "";
            }
            else if (input[i]==0) {
                reverse(splited.begin(), splited.end());
                cout << splited;
                break;
            }
            else {
                splited.push_back(input[i]);
            }
        }
        cout << '\n';
    }
}
