#include <iostream>

int main() {
    int N, M;
    std::cin >> N;
    std::cin >> M;

    if (M==1 || M==2) {
        std::cout << "NEWBIE!";
    }
    else if (M<=N) {
        std::cout << "OLDBIE!";
    }
    else {
        std::cout << "TLE!";
    }
}
