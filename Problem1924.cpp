#include <iostream>
using namespace std;

string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    int x, y; cin >> x >> y;

    int mon = 1; int day = 0; int dayCount = 0;

    while (true) {
        day++; dayCount++;
        if (mon==2) {
            if (day==29) {
                mon++; day = 1;
            }
        }
        else if (mon==4||mon==6||mon==9||mon==11) {
            if (day==31) {
                mon++; day = 1;
            }
        }
        else {
            if (day==32) {
                mon++; day=1;
            }
        }
        if (mon==x && day==y) {
            break;
        }
    }
    cout << days[dayCount%7];
}
