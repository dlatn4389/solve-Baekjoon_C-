#include <iostream>
#include <algorithm>
#include <string>

std::string binaryAdd(std::string binary1, std::string binary2) {
    if (binary1.length()<binary2.length()) {
        std::swap(binary1, binary2);
    }
    std::reverse(binary1.begin(), binary1.end());
    std::reverse(binary2.begin(), binary2.end());
    bool carry = false;

    std::string answer = "";
    for (int i=0; i<binary1.length(); i++) {
        if (carry) {
            if (binary1[i]=='0') {
                binary1[i]='1';
                carry = false;
            }
            else {
                binary1[i] = '0';
            }
        }
        if (i<binary2.length()) {
            if (binary1[i]=='1' && binary2[i]=='1') {
                answer.append("0");
                carry = true;
            }
            else if (binary1[i]=='0' && binary2[i]=='0') {
                answer.append("0");
            }
            else {
                answer.append("1");
            }
        }
        else {
            answer.append(std::string(1, binary1[i]));
        }
    }
    if (carry) {
        answer.append("1");
    }
    std::reverse(answer.begin(), answer.end());
    return answer;
}

std::string binaryMul(std::string binary1, std::string binary2) {
    std::string answer = "0";
    std::string temp;
    for (int i=0; i<binary2.length(); i++) {
        if (binary2[binary2.length()-1-i]=='1') {
            temp = binary1;
            for (int j=0; j<i; j++) {
                temp.append("0");
            }
            answer = binaryAdd(answer, temp);
        }
    }
    return answer;
}

int main() {
    std::string binary1, binary2;
    std::cin >> binary1;
    std::cin >> binary2;
    std::cout << binaryMul(binary1, binary2);
}