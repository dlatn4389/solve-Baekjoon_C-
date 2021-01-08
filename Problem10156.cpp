#include <iostream>

int main() {
    int K, N, M;
    std::cin >> K;
    std::cin >> N;
    std::cin >> M;

    if ((K*N)>M) {
        std::cout << (K*N)-M;
        return 0;
    }
    std::cout << 0;
}
