#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A>B) {
        swap(A, B);
    }
    if (A>C) {
        swap(A, C);
    }
    if (B>C) {
        swap(B, C);
    }
    if ((B-A)==(C-B)) {
        std::cout << C+(C-B);
    }
    else if ((B-A)>(C-B)) {
        std::cout << A+(C-B);
    }
    else {
        std::cout << B+(B-A);
    }
}
