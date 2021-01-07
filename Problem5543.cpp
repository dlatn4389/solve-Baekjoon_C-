#include <iostream>
#include <algorithm>

int main() {
    int burgers[3];
    int beverages[2];

    for (int i=0; i<3; i++) {
        std::cin >> burgers[i];
    }
    for (int i=0; i<2; i++) {
        std::cin >> beverages[i];
    }
    std::sort(burgers, burgers+3);
    std::sort(beverages, beverages+2);
    std::cout << burgers[0]+beverages[0]-50 << std::endl;
}
