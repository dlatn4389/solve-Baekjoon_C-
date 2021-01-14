#include <iostream>

int main() {
    long long N;
    std::cin >> N;

    long long result;
    if (N==1) {
        result = 5;
    }
    else {
        result = 1 + (3*N*N+5*N)/2;
    }
    std::cout << result%45678;
}
