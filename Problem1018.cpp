#include <iostream>
using namespace std;

char board[50][50];

int INF = 99999999;

char black[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
};

char white[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
};

int getMin(int a, int b) {
    if (a>b) return b;
    return a;
}

int firstBlack(int start_row, int start_col) {
    int answer = 0;
    for (int i=start_row; i<start_row+8; i++) {
        for (int j=start_col; j<start_col+8; j++) {
            if (board[i][j]!=black[i-start_row][j-start_col]) answer++;
        }
    }
    return answer;
}

int firstWhite(int start_row, int start_col) {
    int answer = 0;
    for (int i=start_row; i<start_row+8; i++) {
        for (int j=start_col; j<start_col+8; j++) {
            if (board[i][j]!=white[i-start_row][j-start_col]) answer++;
        }
    }
    return answer;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        cin >> board[i];
    }

    int min = INF;

    for (int i=0; i+7<N; i++) {
        for (int j=0; j+7<M; j++) {
            int minimum = getMin(firstBlack(i, j), firstWhite(i, j));
            if (min>minimum) {
                min = minimum;
            }
        }
    }
    cout << min;
}
