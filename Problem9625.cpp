#include <iostream>
using namespace std;

pair<int, int> ABs[46];

int main() {
    ABs[0].first = 1;
    ABs[1].second = 0;

    for (int i=1; i<=45; i++) {
        ABs[i].first = ABs[i-1].second;
        ABs[i].second = ABs[i-1].first+ABs[i-1].second;
    }

    int K; cin >> K;
    cout << ABs[K].first << " " << ABs[K].second;
}
