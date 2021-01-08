#include <iostream>

int main() {
    int T;
    std::cin >> T;
    if (T%10!=0) {
        std::cout << -1;
        return 0;
    }
    std::cout << T/300 << " ";
    T %= 300;
    std::cout << T/60 << " ";
    T %= 60;
    std::cout << T/10;
}
