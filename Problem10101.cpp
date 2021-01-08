#include <iostream>

int main() {
    int angle1, angle2, angle3;
    std::cin >> angle1;
    std::cin >> angle2;
    std::cin >> angle3;

    if ((angle1+angle2+angle3)!=180) {
        std::cout << "Error";
        return 0;
    }

    if (angle1==angle2 && angle2==angle3) {
        std::cout << "Equilateral";
    }
    else if ((angle1!=angle2&&angle2!=angle3) && angle1!=angle3) {
        std::cout << "Scalene";
    }
    else {
        std::cout << "Isosceles";
    }
}