#include <iostream>

int main() {
    char mbti[4];
    std::cin >> mbti;
    char lover[4];
    if (mbti[0]=='E') {
        lover[0] = 'I';
    }
    else {
        lover[0] = 'E';
    }
    if (mbti[1]=='S') {
        lover[1] = 'N';
    }
    else {
        lover[1] = 'S';
    }
    if (mbti[2]=='T') {
        lover[2] = 'F';
    }
    else {
        lover[2] = 'T';
    }
    if (mbti[3]=='J') {
        lover[3] = 'P';
    }
    else {
        lover[3] = 'J';
    }
    for (char c : lover) {
        std::cout << c;
    }
}
