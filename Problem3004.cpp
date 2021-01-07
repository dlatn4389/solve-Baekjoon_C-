#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int slice_vertical = 0;
    int slice_horizental = 0;

    while (true) {
        slice_horizental++;
        N--;
        if (N==0) {
            break;
        }
        slice_vertical++;
        N--;
        if (N==0) {
            break;
        }
    }
    std::cout << (slice_horizental+1)*(slice_vertical+1) << std::endl;
}
