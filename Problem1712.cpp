#include <iostream>

int main() {
    long A, B, C;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    if (B==C) {
        std::cout << -1 << std::endl;
        return 0;
    }
    int n = A/(C-B) + 1;
    if (n<1) {
        std::cout << -1 << std::endl;
        return 0;
    }
    std::cout << n << std::endl;
}
