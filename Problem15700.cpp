#include <iostream>

int main() {
    long long N, M;
    std::cin >> N;
    std::cin >> M;

    if (N==1 && M==1) {
        std::cout << 0;
        return 0;
    }

    long long result = (N*M)/2;

    std::cout << result;
}
