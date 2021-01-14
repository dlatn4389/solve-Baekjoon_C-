#include <iostream>

int main() {
    int cups[3];
    cups[0] = 1;
    cups[1] = 2;
    cups[2] = 3;

    int M, X, Y;
    std::cin >> M;

    for (int i=0; i<M; i++) {
        std::cin >> X >> Y;
        int indX = 0, indY = 0;
        for (int j=0; j<3; j++) {
            if (cups[j]==X) {
                indX = j;
            }
            if (cups[j]==Y) {
                indY = j;
            }
        }

        int temp = cups[indX];
        cups[indX] = cups[indY];
        cups[indY] = temp;

        /*for (int j : cups) {
            std::cout << j << " ";
        }
        std::cout << std::endl;*/
    }
    std::cout << cups[0];
}
