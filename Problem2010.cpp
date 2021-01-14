#include <iostream>

int main() {
    int N;
    int multi;
    std::cin >> N;

    int answer = 1;
    while (N--) {
        std::cin >> multi;
        answer -= 1;
        answer += multi;
    }
    std::cout << answer;
}
