#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    int sum1 = A+D;
    int sum2 = B+C;

    if (sum1>sum2) {
        std::cout << sum2;
        return 0;
    }
    std::cout << sum1;
}
