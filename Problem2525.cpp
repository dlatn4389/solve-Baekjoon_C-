#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    B += C;
    while (B>=60) {
        if (B>=60) {
            B -= 60;
            A += 1;
        }
        if (A==24) {
            A = 0;
        }
    }
    std::cout << A << " " << B << std::endl;
}
