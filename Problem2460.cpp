#include <iostream>

int main() {
    int answer = 0, num = 0;
    int in, out;

    for (int i=0; i<10; i++) {
        std::cin >> in >> out;
        num = num - in + out;
        if (num>answer) {
            answer = num;
        }
    }
    std::cout << answer;
}
