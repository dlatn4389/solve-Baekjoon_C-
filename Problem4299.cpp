#include <iostream>

int main() {
    int sum, sub;
    std::cin >> sum;
    std::cin >> sub;

    if (sum < sub || (sum+sub)%2==1) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int A = (sum+sub)/2;
    int B = sum - A;

    std::cout << A << " " << B << std::endl;
}
