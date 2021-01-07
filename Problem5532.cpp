#include <iostream>

int setL(int& L, int div1, int div2) {
    if (div1>div2) {
        L -= div1;
    }
    else {
        L -= div2;
    }
    return L;
}

int main() {
    int L, A, B, C, D;
    std::cin >> L;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    int div1 = A/C;
    int div2 = B/D;

    if (A%C==0 && B%D==0) {
    }
    else if (A%C!=0 && B%D==0) {
        div1 += 1;
    }
    else if (A%C==0 && B%D!=0) {
        div2 += 1;
    }
    else {
        div1++; div2++;
    }
    std::cout << setL(L, div1, div2) << std::endl;
}
