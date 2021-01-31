#include <iostream>
using namespace std;

int main() {
    int max = 0, min = 1000;

    int N; cin >> N;
    while (N--) {
        int score; cin >> score;
        if (score>max) max = score;
        if (min>score) min = score;
    }
    cout << max-min;
}
