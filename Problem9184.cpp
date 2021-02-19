#include <iostream>
using namespace std;

int Ws[21][21][21];

void initialize() {
    for (int i=0; i<=20; i++) {
        for (int j=0; j<=20; j++) {
            for (int k=0; k<=20; k++) {
                if (i==0 || j==0 || k==0) {
                    Ws[i][j][k] = 1;
                    continue;
                }
                if (i<j && j<k) {
                    Ws[i][j][k] = Ws[i][j][k-1]+Ws[i][j-1][k-1]-Ws[i][j-1][k];
                }
                else {
                    Ws[i][j][k] = Ws[i-1][j][k]+Ws[i-1][j-1][k]+Ws[i-1][j][k-1]-Ws[i-1][j-1][k-1];
                }
            }
        }
    }
}

void print(int a,int b,int c) {
    int ans;
    if (a<=0 || b<=0 || c<=0) {
        ans = 1;
    }
    else if (a>20 || b>20 || c>20) {
        ans = Ws[20][20][20];
    }
    else {
        ans = Ws[a][b][c];
    }
    cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    initialize();

    while (true) {
        cin >> a >> b >> c;
        if (a==-1 && b==-1 && c==-1) break;
        print(a, b, c);
    }
}
