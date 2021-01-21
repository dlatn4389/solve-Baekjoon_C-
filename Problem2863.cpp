#include <iostream>
using namespace std;

double maxDouble(double a, double b) {
    if (a>b) {
        return a;
    }
    return b;
}
int main() {
    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    double num4 = (double)A/C+B/D;
    double num1 = (double)C/D+A/B;
    double num2 = (double)D/B+C/A;
    double num3 = (double)B/A+D/C;

    double max = maxDouble(num1, num2);
    max = maxDouble(max, num3);
    max = maxDouble(max, num4);

    if (max==num1) {
        cout << "1";
        return 0;
    }
    if (max==num2) {
        cout << "2";
        return 0;
    }
    if (max==num3) {
        cout << "3";
        return 0;
    }
    if (max==num4) {
        cout << "4";
        return 0;
    }
}