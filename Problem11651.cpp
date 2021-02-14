#include <iostream>
using namespace std;
#include <algorithm>

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second==p2.second) {
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    pair<int, int> poses[N];

    for (int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        poses[i] = {x, y};
    }

    sort(poses, poses+N, compare);

    for (pair<int, int> p : poses) {
        cout << p.first << " " << p.second << '\n';
    }
}
