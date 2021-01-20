#include <iostream>
using namespace std;

int main() {
    int Acard[10];
    int Bcard[10];
    for (int i=0; i<10; i++) {
        cin >> Acard[i];
    }
    for (int i=0; i<10; i++) {
        cin >> Bcard[i];
    }
    int Ascore = 0, Bscore = 0;
    for (int i=0; i<10; i++) {
        if (Acard[i]>Bcard[i]) {
            Ascore += 3;
        }
        else if (Acard[i]==Bcard[i]) {
            Ascore += 1;
            Bscore += 1;
        }
        else {
            Bscore += 3;
        }
    }
    cout << Ascore << " " << Bscore << '\n';
    std::string winner;
    if (Ascore>Bscore) {
        winner = "A";
    }
    else if (Bscore>Ascore) {
        winner = "B";
    }
    else {
        for (int i=9; i>=0; i--) {
            if (Acard[i]>Bcard[i]) {
                winner = "A";
                break;
            }
            else if (Bcard[i]>Acard[i]) {
                winner = "B";
                break;
            }
            winner = "D";
        }
    }
    cout << winner;
}
