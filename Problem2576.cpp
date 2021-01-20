#include <iostream>

int main() {
    int sum = 0;
    int min = 101;

    for (int i=0; i<7; i++) {
        int N;
        std::cin >> N;
        if (N%2==1) {
            sum += N;
            if (min>N) {
                min = N;
            }
        }
    }
    if (sum==0) {
        std::cout << -1;
        return 0;
    }
    std::cout << sum << '\n';
    std::cout << min;
}
