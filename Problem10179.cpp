#include <iostream>
#include <cmath>

int main() {
    int T;
    std::cin >> T;
    double price;
    for (int i=0; i<T; i++) {
        std::cin >> price;
        price*=0.8;
        printf("$%.2f\n", price);
    }
}
