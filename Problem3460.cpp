#include <iostream>
#include <algorithm>
using namespace std;

string DecimalToBinary(int);
void printNum(string);
int pow(int a, int b) {
    int answer = 1;
    while (b--) {
        answer *= a;
    }
    return answer;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int input;
        cin >> input;
        printNum(DecimalToBinary(input));
        cout << '\n';
    }
}

string DecimalToBinary(int num) {
    string binary = "";
    int power = 0;
    while (pow(2, power)<=num) {
        power++;
    }
    power-=1;

    for (int i=power; i>=0; i--) {
        if (pow(2, i)<=num) {
            binary.push_back('1');
            num -= pow(2, i);
        }
        else {
            binary.push_back('0');
        }
    }
    return binary;
}

void printNum(string binary) {
    reverse(binary.begin(), binary.end());
    for (int i=0; i<binary.length(); i++) {
        if (binary.at(i)=='1') {
            cout << i << " ";
        }
    }
}
