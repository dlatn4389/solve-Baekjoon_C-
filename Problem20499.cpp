#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    int play[3];
    std::string split = "";
    int index = 0;
    for (int i=0; i<input.length(); i++) {
        if (input[i]=='/') {
            play[index] = std::stoi(split);
            split = "";
            index++;
        }
        else {
            split.append(std::string(1,input[i]));
            if (i==input.length()-1) {
                play[index] = std::stoi(split);
            }
        }
    }
    int K = play[0], D = play[1], A = play[2];

    if ((K+A)<D || D==0) {
        std::cout << "hasu";
        return 0;
    }
    std::cout << "gosu";
}
