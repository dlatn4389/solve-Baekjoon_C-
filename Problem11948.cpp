#include <iostream>

int main() {
    int sciences[4];
    int societies[2];

    for (int i=0; i<4; i++) {
        std::cin >> sciences[i];
    }
    for (int i=0; i<2; i++) {
        std::cin >> societies[i];
    }
    int minIndex1 = 0;
    for (int i=1; i<4; i++) {
        if (sciences[minIndex1]>sciences[i]) {
            minIndex1 = i;
        }
    }
    int minIndex2 = 0;
    if (societies[1]<societies[minIndex2]) {
        minIndex2 = 1;
    }

    int result = 0;
    for (int i=0; i<4; i++) {
        if (i==minIndex1) {
            continue;
        }
        result += sciences[i];
    }
    for (int i=0; i<2; i++) {
        if (i==minIndex2) {
            continue;
        }
        result += societies[i];
    }
    std::cout << result;
}
