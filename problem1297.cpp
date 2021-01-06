#include <iostream>
#include <cmath>

int main() {
    int cross, height, width;
    std::cin >> cross;
    std::cin >> height;
    std::cin >> width;
    double k = (double)cross/sqrt(height*height+width*width);
    int realheight = k*height;
    int realwidth = k*width;
    std::cout << realheight << " " << realwidth << std::endl;
}
