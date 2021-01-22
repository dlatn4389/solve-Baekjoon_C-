#include <iostream>
#include <cmath>
using namespace std;

int getAns1(int, int);
int getAns2(int, int);
int sqrt(int);

int main() {
    int A, B;
    cin >> A >> B;

    int ans1 = getAns1(A, B);
    int ans2 = getAns2(A, B);

    if (ans1==ans2) {
        cout << ans1;
        return 0;
    }
    cout << ans1 << " " << ans2;
}

int getAns1(int A, int B) {
    int answer = -A-sqrt(A*A-B);
    return answer;
}
int getAns2(int A, int B) {
    int answer = -A+sqrt(A*A-B);
    return answer;
}

int sqrt(int n) {
    int answer = 0;
    while (true) {
        if (answer*answer==n) {
            return answer;
        }
        answer++;
    }
}