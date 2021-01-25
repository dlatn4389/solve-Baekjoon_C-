#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int Changyoung = 100, Sangdeok = 100;
    int Changyoung_dice, Sangdeok_dice;

    while (n--) {
        cin >> Changyoung_dice >> Sangdeok_dice;
        if (Changyoung_dice>Sangdeok_dice) {
            Sangdeok -= Changyoung_dice;
        }
        else if (Sangdeok_dice>Changyoung_dice) {
            Changyoung -= Sangdeok_dice;
        }
    }
    cout << Changyoung << '\n' << Sangdeok;
}
