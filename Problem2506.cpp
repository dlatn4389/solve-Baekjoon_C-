#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int score[N];
    for (int i=0; i<N; i++) {
        cin >> score[i];
    }

    int series = 0;
    int answer = 0;
    for (int i : score) {
        if (i==1) {
            series++;
            answer += series;
        }
        else {
            series = 0;
        }
    }
    cout << answer;
}
