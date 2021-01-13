#include <iostream>
#include <cmath>

int main() {
    double L;
    std::cin >> L;
    double answer = sqrt(3)*pow(L, 2)/4;
    printf("%.10f", answer);
}
