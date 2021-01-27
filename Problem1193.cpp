#include <iostream>
using namespace std;

int getN(int);
int sum(int);

int main() {
    int X;
    cin >> X;

    int lineNum = getN(X);
    int i = X-sum(lineNum-1);
    int denominator, nominator;
    if (lineNum%2==1) {
        denominator = lineNum-(i-1);
        nominator = 1+(i-1);
    }
    else {
        denominator = 1+(i-1);
        nominator = lineNum-(i-1);
    }
    cout << denominator << "/" << nominator;
}

int getN(int X) {
    int lineNum;
    int line = 0;
    while (true) {
        if (X>sum(line) && X<=sum(line+1)) {
            lineNum = line+1;
            break;
        }
        line++;
    }
    return lineNum;
}

int sum(int n) {
    return n*(n+1)/2;
}