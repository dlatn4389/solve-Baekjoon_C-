#include <iostream>

int main() {
    long long result = 1;
    for (int i=0; i<250; i++) {
        result *= 2;
    }
    std::cout << result;
}
