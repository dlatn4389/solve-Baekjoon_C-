#include <iostream>
#include <algorithm>

int main() {
    int sum1 = 0, sum2 = 0;
    int N;
    for (int i=0; i<4; i++) {
        std::cin >> N;
        sum1 += N;
    }
    for (int i=0; i<4; i++) {
        std::cin >> N;
        sum2 += N;
    }
    if (sum1>sum2) {
        std::cout << sum1 << std::endl;
    }
    else {
        std::cout << sum2 << std::endl;
    }
}