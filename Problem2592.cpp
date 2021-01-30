#include <iostream>
using namespace std;

int scoreList[1001]={0,};

int main() {
    int sum = 0;
    int input;
    for (int i=0; i<10; i++) {
        cin >> input;
        sum += input;
        scoreList[input]++;
    }
    cout << sum/10 << '\n';
    int maxIndex = 1;
    for (int i=1; i<1001; i++) {
        if (scoreList[maxIndex]<scoreList[i]) {
            maxIndex = i;
        }
    }
    cout << maxIndex;
}
