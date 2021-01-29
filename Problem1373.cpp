#include <iostream>
#include <algorithm>
using namespace std;

int pow(int num, int power) {
    int answer = 1;
    for (int i=0; i<power; i++) {
        answer *= num;
    }
    return answer;
}

string binaryToOct(string binary) {
    reverse(binary.begin(), binary.end());
    string answer = "";
    int power = 0;
    int num = 0;

    while (binary.length()%3!=0) {
        binary.push_back('0');
    }

    for (int i=0; i<binary.length(); i++) {
        num += (binary.at(i)-'0')*pow(2, power++);
        if (power==3) {
            answer.push_back(num+'0');
            power = 0;
            num = 0;
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
}

int main() {
    string binary;
    cin >> binary;
    cout << binaryToOct(binary);
}
