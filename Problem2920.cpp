#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    if (input=="1 2 3 4 5 6 7 8") {
        cout << "ascending";
        return 0;
    }
    if (input=="8 7 6 5 4 3 2 1") {
        cout << "descending";
        return 0;
    }
    cout << "mixed";
}
