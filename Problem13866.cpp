#include <iostream>

int absolute(int a) {
    if (a<0) {
        return -a;
    }
    return a;
}

int main() {
    int A, B, C, D;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    std::cout << absolute((A+D)-(B+C));
}
