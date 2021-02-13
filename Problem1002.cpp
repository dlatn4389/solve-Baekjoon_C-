#include <iostream>
using namespace std;

int abs(int k) {
    if (k<0) return -k;
    return k;
}

int square(int k) {
    return k*k;
}

class Circle {
public:
    int x, y, radius;
    Circle(int, int, int);
};

Circle::Circle(int x, int y, int radius): x(x), y(y), radius(radius) {}

int getAns(Circle c1, Circle c2) {
    if (c1.x==c2.x && c1.y==c2.y) {
        if (c1.radius==c2.radius) return -1;
        else return 0;
    }
    int distance_notSqrt = square(c1.x-c2.x)+square(c1.y-c2.y);
    if (square(c1.radius+c2.radius)==distance_notSqrt) {
        return 1;
    }
    else if (square(c1.radius+c2.radius)<distance_notSqrt) return 0;

    if (square(abs(c1.radius-c2.radius))==distance_notSqrt) return 1;
    else if (square(c1.radius-c2.radius)>distance_notSqrt) return 0;

    return 2;
}

int main() {
    int T; cin >> T;

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        Circle c1(x1, y1, r1);
        Circle c2(x2, y2, r2);
        cout << getAns(c1, c2) << '\n';
    }
}
