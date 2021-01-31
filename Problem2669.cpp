#include <iostream>
using namespace std;

class Rectangular{
public:
    int left_x, down_y, right_x, up_y;
    Rectangular(int left_x, int down_y, int right_x, int up_y):left_x(left_x), down_y(down_y), right_x(right_x), up_y(up_y) {};
    bool isin(double x, double y) {
        if (x>left_x && x<right_x && y>down_y && y<up_y ) return true;
        return false;
    }
};

int main() {
    int left_x, down_y, right_x, up_y;
    Rectangular *r1, *r2, *r3, *r4;

    for (int i=0; i<4; i++) {
        cin >> left_x >> down_y >> right_x >> up_y;
        if (i==0) {
            r1 = new Rectangular(left_x, down_y, right_x, up_y);
        }
        if (i==1) {
            r2 = new Rectangular(left_x, down_y, right_x, up_y);
        }
        if (i==2) {
            r3 = new Rectangular(left_x, down_y, right_x, up_y);
        }
        if (i==3) {
            r4 = new Rectangular(left_x, down_y, right_x, up_y);
        }
    }
    int answer = 0;
    for (double i=1.5; i<100; i++) {
        for (double j=1.5; j<100; j++) {
            if (r1->isin(i, j) || r2->isin(i, j) || r3->isin(i, j) || r4->isin(i, j)) {
                answer++;
            }
        }
    }
    cout << answer;
}
