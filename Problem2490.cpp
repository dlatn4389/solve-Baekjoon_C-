#include <iostream>

void yuttNoli(int num) {
    if (num==0) {
        std::cout << "D" << std::endl;
    }
    if (num==1) {
        std::cout << "C" << std::endl;
    }
    if (num==2) {
        std::cout << "B" << std::endl;
    }
    if (num==3) {
        std::cout << "A" << std::endl;
    }
    if (num==4) {
        std::cout << "E" << std::endl;
    }
}

int main() {
    int yutt[4];
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            std::cin >> yutt[j];
        }
        int num = 0;
        for (int i : yutt) {
            if (i==1) {
                num++;
            }
        }
        yuttNoli(num);
    }
}
