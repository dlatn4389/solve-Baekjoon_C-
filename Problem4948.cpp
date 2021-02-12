#include <iostream>
using namespace std;

bool notPrime[246913];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i=2; i<=123456; i++) {
        if (!notPrime[i]) {
            for (int j=2; j<=123456; j++) {
                if (i*j>246912) break;
                notPrime[i*j] = true;
            }
        }
    }

    int num;
    while (cin >> num) {
        if (num==0) break;

        int ans = 0;
        for (int i=num+1; i<=2*num; i++) {
            if (!notPrime[i]) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
}
