#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int basicHP, basicMP, basicAttack, basicDefense;
        int armorHP, armorMP, armorAttack, armorDefense;
        cin >> basicHP >> basicMP >> basicAttack >> basicDefense >> armorHP >> armorMP >> armorAttack >> armorDefense;
        int HP = basicHP + armorHP;
        int MP = basicMP + armorMP;
        int Attack = basicAttack + armorAttack;
        int Defense = basicDefense + armorDefense;
        if (HP<1) {
            HP = 1;
        }
        if (MP<1) {
            MP = 1;
        }
        if (Attack<0) {
            Attack = 0;
        }
        int power = HP + 5*MP + 2*Attack + 2*Defense;
        cout << power << '\n';
    }
}
