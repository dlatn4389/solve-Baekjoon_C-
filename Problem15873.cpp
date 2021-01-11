#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    int size = input.length();

    int A, B;
    if (size==3) {
        if (input[2]=='0') {
            A = std::stoi(std::string(1, input[0]));
            B = 10;
        }
        else {
            A = 10;
            B = std::stoi(std::string(1,input[2]));
        }
    }
    else if (size==4) {
        A = 10;
        B = 10;
    }
    else {
        A = std::stoi(std::string(1, input[0]));
        B = std::stoi(std::string(1, input[1]));
    }
    std::cout << A+B;
}
