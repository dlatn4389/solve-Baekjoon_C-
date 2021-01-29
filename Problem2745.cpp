#include <iostream>
#include <algorithm>
using namespace std;

int charToInt(char c) {
    if (c-'A'>=0) {
        return c-'A'+10;
    }
    return c-'0';
}

int pow(int n, int power) {
    int answer = 1;
    for (int i=0; i<power; i++) {
        answer *= n;
    }
    return answer;
}

int main() {
    string input; int num;
    cin >> input >> num;
    int power = 0;
    reverse(input.begin(), input.end());

    int answer = 0;
    for (char c : input) {
        answer += charToInt(c)*(pow(num, power));
        power++;
    }
    cout << answer;
}
