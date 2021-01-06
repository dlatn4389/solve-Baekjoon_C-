#include <iostream>

int main() {
    long N, M;
    std::cin >> N;
    std::cin >> M;
    if (N>M) {
        std::cout << N-M << std::endl;
        return 0;
    }
    std::cout << M-N << std::endl;
}
