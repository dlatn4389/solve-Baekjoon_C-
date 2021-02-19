#include <iostream>
using namespace std;

int zero = 0;
int one = 0;

pair<int, int> fibonacci_called[41];

int main() {
    int T;
    cin >> T;

    fibonacci_called[0] = {1, 0};
    fibonacci_called[1] = {0, 1};

    for (int i=2; i<=40; i++) {
        fibonacci_called[i].first = fibonacci_called[i-1].first + fibonacci_called[i-2].first;
        fibonacci_called[i].second = fibonacci_called[i-1].second + fibonacci_called[i-2].second;
    }

    while (T--) {
        int n;
        cin >> n;

        cout << fibonacci_called[n].first << " " << fibonacci_called[n].second << '\n';
    }
}
