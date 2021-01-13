#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    std::string oct;
    std::cin >> oct;
    std::string binary = "";

    int power, n, count;
    for (int i=0; i<oct.length(); i++) {
        n = std::stoi(std::string(1, oct[i]));
        power = 2;
        count = 0;
        while (n!=0 || count!=3) {
            if (pow(2,power)<=n) {
                binary.append("1");
                n -= pow(2, power);
            }
            else {
                binary.append("0");
            }
            power--;
            count++;
        }
    }
    if (binary=="000") {
        std::cout << "0";
        return 0;
    }
    int exist0 = 0;
    for (int i=0; i<binary.length(); i++) {
        if (binary[i]=='0') {
            exist0++;
        }
        else {
            break;
        }
    }
    std::cout << binary.substr(exist0, binary.length()-exist0);
}
