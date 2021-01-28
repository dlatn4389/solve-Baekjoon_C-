#include <iostream>
using namespace std;

string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
long long muls[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

int main() {
    string color1; cin >> color1;
    int ten;
    for (int i=0; i<10; i++) {
        if (colors[i]==color1) {
            ten = i;
            break;
        }
    }
    string color2; cin >> color2;
    int one;
    for (int i=0; i<10; i++) {
        if (colors[i]==color2) {
            one = i;
            break;
        }
    }
    string color3; cin >> color3;
    long long mul;
    for (int i=0; i<10; i++) {
        if (colors[i]==color3) {
            mul = i;
            break;
        }
    }
    mul = muls[mul];

    long long answer = (10*ten+one)*mul;
    cout << answer;
}