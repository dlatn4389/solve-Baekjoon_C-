#include <iostream>

int main() {
    int A, B, C, D, P;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;
    std::cin >> P;

    int price1, price2;
    price1 = A*P;

    if (P<=C) {
        price2 = B;
    }
    else {
        price2 = B + (P-C)*D;
    }

    if (price1>price2) {
        std::cout << price2;
        return 0;
    }
    std::cout << price1;
}
