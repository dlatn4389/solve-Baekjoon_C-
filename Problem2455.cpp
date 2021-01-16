#include <iostream>

int main() {
    int num = 0;
    int in, out;
    int answer = 0;
    for (int i=0; i<4; i++) {
        std::cin >> in >> out;
        num = num - in + out;
        if (num>answer) {
            answer = num;
        }
    }
    std::cout << answer;
}
