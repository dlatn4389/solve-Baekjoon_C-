#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N, K; cin >> N >> K;
    int answer = 0;

    int men[7] = {0,}; int women[7]={0,};

    while (N--) {
        int gender, grade; cin >> gender >> grade;
        if (gender==1) {
            men[grade]++;
        }
        else {
            women[grade]++;
        }
    }

    for (int year=1; year<=6; year++) {
        answer += men[year]/K;
        answer += women[year]/K;
        if (men[year]%K!=0) {
            answer++;
        }
        if (women[year]%K!=0) {
            answer++;
        }
    }
    cout << answer;
}
