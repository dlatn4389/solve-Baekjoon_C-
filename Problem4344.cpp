#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int C; cin >> C;

    while (C--) {
        int N; cin >> N;
        int scores[N];
        int sum = 0;
        for (int i=0; i<N; i++) {
            cin >> scores[i];
            sum += scores[i];
        }
        double avg = (double)sum/N;
        int average_up = 0;
        for (int i=0; i<N; i++) {
            if (scores[i]>avg) {
                average_up++;
            }
        }
        printf("%.3f%%\n", (double)average_up/N*100);
    }
}
