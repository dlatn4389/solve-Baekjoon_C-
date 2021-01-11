#include <iostream>

int abs(int k) {
    if (k<0) {
        return -k;
    }
    return k;
}

int main() {
    int Br, Bc, Dr, Dc, Jr, Jc;
    std::cin >> Br;
    std::cin >> Bc;
    std::cin >> Dr;
    std::cin >> Dc;
    std::cin >> Jr;
    std::cin >> Jc;

    int Bmove_x, Bmove_y, Dmove_x, Dmove_y;
    int Bcross = 0;
    Bmove_x = abs(Jr-Br);
    Bmove_y = abs(Jc-Bc);
    Dmove_x = abs(Jr-Dr);
    Dmove_y = abs(Jc-Dc);

    if (Bmove_x>Bmove_y) {
        Bmove_x -= Bmove_y;
        Bcross += Bmove_y;
        Bmove_y = 0;
    }
    else {
        Bmove_y -= Bmove_x;
        Bcross += Bmove_x;
        Bmove_x = 0;
    }
    int Bmove = Bmove_x+Bmove_y+Bcross;
    int Dmove = Dmove_x + Dmove_y;

    if (Bmove<Dmove) {
        std::cout << "bessie";
    }
    else if (Bmove>Dmove) {
        std::cout << "daisy";
    }
    else {
        std::cout << "tie";
    }
}