#include <iostream>
using namespace std;

int main() {
    int Acard[10], Bcard[10];
    for (int i=0; i<10; i++) {
        cin >> Acard[i];
    }
    for (int i=0; i<10; i++) {
        cin >> Bcard[i];
    }

    int Awin = 0, Bwin = 0;
    for (int i=0; i<10; i++) {
        if (Acard[i]>Bcard[i]) {
            Awin++;
        }
        else if (Bcard[i]>Acard[i]) {
            Bwin++;
        }
    }
    if (Awin>Bwin) {
        cout << "A";
    }
    else if (Bwin>Awin) {
        cout << "B";
    }
    else {
        cout << "D";
    }
}
