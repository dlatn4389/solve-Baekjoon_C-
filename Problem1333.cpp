#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L, D;
    cin >> N >> L >> D;
    vector<bool> sing;

    for (int i=0; i<N+1; i++) {
        if (i==N) {
            for (int j=0; j<L+5; j++) {
                sing.push_back(false);
            }
            break;
        }
        for (int j=0; j<L; j++) {
            sing.push_back(true);
        }
        for (int j=0; j<5; j++) {
            sing.push_back(false);
        }
    }

    int time = 0;
    while (true) {
        if ((!sing[time]) && time%D==0) {
            break;
        }
        time += 1;
    }
    std::cout << time;
}