#include <iostream>
using namespace std;

int color_cost[1001][4] = {0,};
int dp[1001][4] = {0,};

const int RED = 1;
const int GREEN = 2;
const int BLUE = 3;

int min(int a, int b) {
    if (a>b) return b;
    return a;
}

int main() {
    int N;
    cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=3; j++) {
            cin >> color_cost[i][j];
        }
    }

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=3; j++) {
            if (j==RED) {
                dp[i][j] = min(dp[i-1][BLUE], dp[i-1][GREEN])+color_cost[i][j];
            }
            else if (j==GREEN) {
                dp[i][j] = min(dp[i-1][RED], dp[i-1][BLUE])+color_cost[i][j];
            }
            else if (j==BLUE) {
                dp[i][j] = min(dp[i-1][RED], dp[i-1][GREEN])+color_cost[i][j];
            }
        }
    }

    int min = 99999999;
    for (int j=1; j<=3; j++) {
        if (min>dp[N][j]) min = dp[N][j];
    }
    cout << min;
}