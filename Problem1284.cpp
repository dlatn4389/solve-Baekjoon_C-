#include <iostream>

int main() {
    int in;

    while (true) {
        std::cin >> in;
        int result = 1;
        if (in==0) {
            break;
        }
        std::string in_string = std::to_string(in);
        for (int i=0; i<in_string.length(); i++) {
            int k = std::stoi(std::string(1,in_string[i]));
            if (k==1) {
                result += 2;
            }
            else if (k==0) {
                result += 4;
            }
            else {
                result += 3;
            }
            result += 1;
        }
        std::cout << result << std::endl;
    }
}
