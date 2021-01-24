#include <iostream>

int main() {
    int boyfriend, girlfriend;

    while (true) {
        std::cin >> boyfriend >> girlfriend;
        if ((!boyfriend) && (!girlfriend)) {
            break;
        }
        std::cout << boyfriend+girlfriend << '\n';
    }
}
