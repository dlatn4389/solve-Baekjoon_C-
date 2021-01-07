#include <iostream>

int main() {
    int A, B, C, time;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> time;
    C += time;

    while (C>=60) {
        if (C>=60) {
            C -= 60;
            B += 1;
        }
        if (B==60) {
            B = 0;
            A += 1;
        }
        if (A==24) {
            A = 0;
        }
    }

    std::cout << A << " " << B << " " << C << std::endl;
}
