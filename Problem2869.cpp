#include <iostream>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;
    int answer;

    if ((V-A)%(A-B)==0) {
        answer = (V-A)/(A-B);
    }
    else {
        answer = (V-A)/(A-B)+1;
    }
    answer++;
    cout << answer;
}
