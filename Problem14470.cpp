#include <iostream>

int main() {
    int A, B, C, D, E;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;
    std::cin >> E;

    int time = 0;
    if (A>0) {
        time += (B-A)*E;
    }
    else {
        time += (-A)*C;
        time += D;
        time += B*E;
    }
    std::cout << time;
}
