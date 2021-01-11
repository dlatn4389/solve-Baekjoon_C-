#include <iostream>
#include <algorithm>

int main() {
    double A, B, C;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    std::cout << (int)std::max(A/B*C, A*B/C);
}
