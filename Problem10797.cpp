#include <iostream>

int main() {
    int restrict, answer, num;
    std::cin >> restrict;
    answer = 0;

    for (int i=0; i<5; i++) {
        std::cin >> num;
        if (num==restrict) {
            answer++;
        }
    }
    std::cout << answer;
}
