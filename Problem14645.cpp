#include <iostream>

int main() {
    int n, k;
    std::cin >> n;
    std::cin >> k;

    std::string str;
    for (int i=0; i<n+1; i++) {
        getline(std::cin, str);
    }
    std::cout << "비와이" << std::endl;
}
