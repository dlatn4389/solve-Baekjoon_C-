#include <iostream>
#include <cmath>

int main() {
    int T, a, b;
    std::cin >> T;

    for (int i=0; i<T; i++) {
        std::cin >> a >> b;
        b %= 4;
        b += 4;
        int answer = 1;

        for (int i=0; i<b; i++) {
            answer = (answer*a)%10;
        }

        answer %= 10;
        if (answer==0) {
            answer = 10;
        }
        std::cout << answer << std::endl;
    }
}