#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;

    while (T--) {
        int n; cin >> n;
        bool opened[n+1];
        for (int i=0; i<n+1; i++) {
            opened[i] = false;
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (j%i==0) {
                    if (opened[j]) {
                        opened[j] = false;
                    }
                    else {
                        opened[j] = true;
                    }
                }
            }
        }
        int answer = 0;
        for (int i=1; i<=n; i++) {
            if (opened[i]) {
                answer++;
            }
        }
        cout << answer << '\n';
    }
}
