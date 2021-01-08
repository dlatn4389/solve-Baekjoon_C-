#include <iostream>
#include <string>
#include <algorithm>

std::string binaryAdd(std::string binary1, std::string binary2) {
    std::string result = "";
    bool carry = false;

    std::reverse(binary1.begin(), binary1.end());
    std::reverse(binary2.begin(), binary2.end());

    for (int i=0; i<binary1.length(); i++) {
        if (carry) {
            if (binary1[i]=='0') {
                binary1[i] = '1';
                carry = false;
            }
            else if (binary1[i]=='1') {
                binary1[i] = '0';
            }
        }
        if (i<binary2.length()) {
            if (binary1[i]=='1' && binary2[i]=='1') {
                carry = true;
                result.append("0");
            }
            else if (binary1[i]=='0' && binary2[i]=='0') {
                result.append("0");
            }
            else {
                result.append("1");
            }
        }
        else {
            result.append(std::string(1,binary1[i]));
        }
    }
    if (carry) {
        result.append("1");
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string binary;
    std::cin >> binary;
    std::string binary_mul16;
    binary_mul16 = binary + "0000";
    std::string binary_mul17 = binaryAdd(binary_mul16, binary);

    std::cout << binary_mul17 << std::endl;
}
