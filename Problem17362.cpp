#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n%8==1 || n%8==5) {
        std::cout << n%8;
    }
    if (n%8==0 || n%8==2) {
        std::cout << 2;
    }
    if (n%8==3 || n%8==7) {
        std::cout << 3;
    }
    if (n%8==4 || n%8==6) {
        std::cout << 4;
    }
}
