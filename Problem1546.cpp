#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N; cin >> N;
    int scores[N];
    for (int i=0; i<N; i++) {
        cin >> scores[i];
    }
    sort(scores, scores+N);

    int max = scores[N-1];
    double sum = 0;
    for (int i=0; i<N; i++) {
        sum += (double)scores[i]/max*100;
    }
    printf("%.2f", (double)sum/N);
}
