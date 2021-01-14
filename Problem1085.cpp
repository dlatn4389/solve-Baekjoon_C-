#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int dist[4];
    dist[0] = x;
    dist[1] = y;
    dist[2] = w-x;
    dist[3] = h-y;
    sort(dist, dist+4);

    cout << dist[0];
}
