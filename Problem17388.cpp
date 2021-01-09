#include <iostream>

int main() {
    int S, K, H;
    std::cin >> S;
    std::cin >> K;
    std::cin >> H;

    if ((S+K+H)>=100) {
        std::cout << "OK";
        return 0;
    }
    if (S<K && S<H) {
        std::cout << "Soongsil";
    }
    else if (K<S && K<H) {
        std::cout << "Korea";
    }
    else {
        std::cout << "Hanyang";
    }
}
