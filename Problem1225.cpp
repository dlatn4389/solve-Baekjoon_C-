#include <iostream>
using namespace std;

int main() {
    char A[10001], B[10001];
    cin >> A >> B;

    long long answer = 0;
    for (int i=0; A[i]!=0; i++) {
        for (int j=0; B[j]!=0; j++) {
            answer += (A[i]-'0')*(B[j]-'0');
        }
    }
    cout << answer;
}
