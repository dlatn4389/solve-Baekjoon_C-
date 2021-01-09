#include <iostream>

int main() {
    int N, W, H, L;
    std::cin >> N;
    std::cin >> W;
    std::cin >> H;
    std::cin >> L;

    int max = (W/L)*(H/L);
    if (N<max) {
        max = N;
    }
    std::cout << max;
}
