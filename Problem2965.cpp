#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int answer = 0;
    if ((B-A)<(C-B)) {
        while (true) {
            if (A<B) {
                A = B+1;
            }
            else if (A>B) {
                B = A+1;
            }
            if (A>=C || B>=C) {
                break;
            }
            answer++;
        }
    }
    else {
        while (true) {
            if (C>B) {
                C = B-1;
            }
            else if (B>C) {
                B = C-1;
            }
            if (B<=A || C<=A) {
                break;
            }
            answer++;
        }
    }
    cout << answer;
}
