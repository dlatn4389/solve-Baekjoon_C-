#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int a, b;
    while (T--) {
        int sum = 0;
        cin >> a >> b;
        if (a==1) {
            sum+=500;
        }
        else if (2<=a && a<=3) {
            sum+=300;
        }
        else if (a>=4 && a<=6) {
            sum += 200;
        }
        else if (a>=7 && a<=10) {
            sum += 50;
        }
        else if (a>=11 && a<=15) {
            sum += 30;
        }
        else if (a>=16 && a<=21) {
            sum += 10;
        }
        if (b==1) {
            sum += 512;
        }
        else if (b>1 && b<=3) {
            sum += 256;
        }
        else if (b>3 && b<=7) {
            sum += 128;
        }
        else if (b>7 && b<=15) {
            sum += 64;
        }
        else if (b>15 && b<=31) {
            sum += 32;
        }
        cout << sum*10000 << '\n';
    }
}
