#include <iostream>

int main() {
    int N, M, K;
    std::cin >> N;
    std::cin >> M;
    std::cin >> K;

    int answer = 0;
    if (M>K) {
        answer += K;
        answer += (N-M);
    }
    else {
        answer += M;
        answer += (N-K);
    }
    std::cout << answer;
}
