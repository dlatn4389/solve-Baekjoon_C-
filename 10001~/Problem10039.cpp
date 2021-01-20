#include <iostream>

int main() {
    int sum = 0;
    int score;
    for (int i=0; i<5; i++) {
        std::cin >> score;
        if (score<40) {
            sum += 40;
            continue;
        }
        sum += score;
    }
    std::cout << sum/5 << std::endl;
}
