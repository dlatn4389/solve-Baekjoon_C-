#include <iostream>
using namespace std;

int answer = 0;
const int MAX = 15;
int array[MAX];

int N;

int abs(int k) {
    if (k<0) return -k;
    return k;
}

bool queen_can_attack(int row, int col) {
    if (row==1) return false;

    for (int i=1; i<row; i++) {
        if (array[i]==col) {
            return true;
        }
        else if ((row-i)==abs(col-array[i])) {
            return true;
        }
    }
    return false;
}

void queen(int find) {
    if (find==N) {
        answer++;
        return;
    }

    for (int i=1; i<=N; i++) {
        if (!queen_can_attack(find+1, i)) {
            array[find+1] = i;
            queen(find+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    queen(0);

    cout << answer;
}
