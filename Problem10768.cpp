#include <iostream>

int main() {
    int mon, day;
    std::cin >> mon;
    std::cin >> day;
    if (mon==1) {
        std::cout << "Before";
    }
    else if (mon==2) {
        if (day<18) {
            std::cout << "Before";
        }
        else if (day==18) {
            std::cout << "Special";
        }
        else {
            std::cout << "After";
        }
    }
    else {
        std::cout << "After";
    }
}
