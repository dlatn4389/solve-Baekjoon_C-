#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592;

int main() {
    double R;
    cin >> R;
    double area1 = R*R*M_PI;
    double area2 = 2*R*R;
    printf("%.6f\n", area1);
    printf("%.6f\n", area2);
}
