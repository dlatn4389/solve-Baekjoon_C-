#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int rings[N];
    for (int i=0; i<N; i++) {
        std::cin >> rings[i];
    }
    int Y = 0, M = 0;
    for (int i : rings) {
        Y += (i/30+1)*10;
        M += (i/60+1)*15;
    }
    if (Y>M) {
        std::cout << "M " << M;
    }
    else if (Y<M) {
        std::cout << "Y " << Y;
    }
    else {
        std::cout << "Y M " << M;
    }
}
