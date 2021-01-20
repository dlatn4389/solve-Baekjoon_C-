#include <iostream>

int main() {
    int score;
    int sum = 0;

    for (int i=0; i<5; i++) {
        std::cin >> score;
        if (score<40) {
            sum += 40;
        }
        else{
            sum += score;
        }
    }
    std::cout << sum/5;
}