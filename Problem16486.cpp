#include <iostream>

const double PI = 3.141592;

int main() {
    double d1, d2;
    std::cin >> d1;
    std::cin >> d2;
    double result = 0;

    result += 2*d1;
    result += 2*PI*d2;
    printf("%.6f\n", result);
}
