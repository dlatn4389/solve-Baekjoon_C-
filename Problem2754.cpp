#include <iostream>
using namespace std;

int main() {
    double add = 0.3;
    double score;
    string grade;
    cin >> grade;

    char abcd = grade.front();
    if (abcd=='A') {
        score = 4.0;
    }
    else if (abcd=='B') {
        score = 3.0;
    }
    else if (abcd=='C') {
        score = 2.0;
    }
    else if (abcd=='D') {
        score = 1.0;
    }
    else if (abcd=='F') {
        score = 0.0;
    }

    char plusminus = grade.back();
    if (plusminus!='F') {
        if (plusminus=='+') {
            score += add;
        }
        else if (plusminus=='-') {
            score -= add;
        }
    }
    if (score==(int)score) {
        cout << score << ".0";
        return 0;
    }
    cout << score;
}
