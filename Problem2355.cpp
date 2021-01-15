#include <iostream>

void swap(long long& a, long long& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    long long A, B;
    std::cin >> A >> B;
    if (A>B) {
        swap(A, B);
    }
    long long answer = ((B-A+1)*(A+B))/2;
    std::cout << answer;
}
