#include <iostream>
using namespace std;

int fibonacci_num[46];

int fibonacci(int n) {
    if (fibonacci_num[n]!=-1) {
        return fibonacci_num[n];
    }
    else {
        fibonacci_num[n] = fibonacci(n-1) + fibonacci(n-2);
        return fibonacci_num[n];
    }
}

int main() {
    for (int i=0; i<46; i++) {
        fibonacci_num[i] = -1;
    }
    fibonacci_num[0] = 0;
    fibonacci_num[1] = 1;
    int n;
    cin >> n;
    fibonacci(n);
    cout << fibonacci_num[n];
}
