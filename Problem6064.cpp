#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 테스트케이스의 개수
    int t; cin >> t;

    while (t--) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        if (x>m or y>n) {
            cout << -1 << '\n';
            continue;
        }
        x %= m;
        y %= n;

        int answer = -1;
        for (int i=x; i<=m*n; i+=m) {
            if (i%n==y) {
                answer = i;
                break;
            }
        }
        cout << answer << '\n';
    }
}