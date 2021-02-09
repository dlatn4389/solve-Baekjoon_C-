#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    bool room[N][N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            char input; cin >> input;
            if (input=='X') {
                room[i][j] = false;
            }
            else {
                room[i][j] = true;
            }
        }
    }

    int answer_width = 0;
    for (int i=0; i<N; i++) {
        int count = 0;
        for (int j=0; j<N; j++) {
            if ((!room[i][j]) && count>0) {
                if (count>=2) {answer_width++;}
                count = 0;
            }
            else if (j==N-1 && room[i][j]) {
                count++;
                if (count>=2) answer_width++;
            }
            else if (room[i][j]) count++;
        }
    }

    int answer_height = 0;
    for (int j=0; j<N; j++) {
        int count = 0;
        for (int i=0; i<N; i++) {
            if ((!room[i][j]) && count>0) {
                if (count>=2) answer_height++;
                count = 0;
            }
            else if (i==N-1 && room[i][j]) {
                count++;
                if (count>=2) answer_height++;
            }
            else if (room[i][j]) count++;
        }
    }

    cout << answer_width << " " << answer_height;
}