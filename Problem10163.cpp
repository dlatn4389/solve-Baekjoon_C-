#include <iostream>
using namespace std;

int board[101][101] = {0,};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    for (int i=1; i<=N; i++) {
        int row, column, width, height;
        cin >> row >> column >> width >> height;
        for (int j=row; j<row+width; j++) {
            for (int k=column; k<column+height; k++) {
                board[j][k] = i;
            }
        }
    }

    for (int i=1; i<=N; i++) {
        int area = 0;
        for (int j=0; j<101; j++) {
            for (int k=0; k<101; k++) {
                if (board[j][k]==i) area++;
            }
        }
        cout << area << '\n';
    }
}
