#include <iostream>
#include <algorithm>

int main() {
    int ints[3];
    std::cin >> ints[0];
    std::cin >> ints[1];
    std::cin >> ints[2];

    std::sort(ints, ints+3);

    for (int i : ints) {
        std::cout << i << " ";
    }
}
