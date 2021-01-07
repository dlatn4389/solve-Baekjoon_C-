#include <iostream>

bool allDifferent(int A, int B, int C) {
    if (A==B) {
        return false;
    }
    if (A==C) {
        return false;
    }
    if (B==C) {
        return false;
    }
    return true;
}

int getMax(int A, int B, int C) {
    int max = A;
    if (B>max) {
        max = B;
    }
    if (C>max) {
        max = C;
    }
    return max;
}

int main() {
    int A, B, C;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    if (allDifferent(A, B, C)) {
        std::cout << getMax(A, B, C)*100 << std::endl;
    }
    else {
        if (A==B && B==C) {
            std::cout << 10000+A*1000 << std::endl;
        }
        else if (A==B) {
            std::cout << 1000 + A*100 << std::endl;
        }
        else if (B==C) {
            std::cout << 1000 + B*100 << std::endl;
        }
        else if (A==C) {
            std::cout << 1000 + A*100 << std::endl;
        }
    }
}
