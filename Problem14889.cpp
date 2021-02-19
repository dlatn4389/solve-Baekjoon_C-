#include <iostream>
using namespace std;
#include <vector>

const int MAX = 21;
int table[MAX][MAX];
bool visit[MAX];

int N;

int MIN = 99999999;
int start_team[11];
int link_team[11];

int abs(int k) {
    if (k<0) return -k;
    return k;
}

void make_team() {
    int start = 1;
    int link = 1;
    for (int i=1; i<=N; i++) {
        if (visit[i]) {
            start_team[start++] = i;
        }
        else {
            link_team[link++] = i;
        }
    }
}

void balanced() {
    int start_sum = 0;
    int link_sum = 0;

    for (int i=1; i<=N/2-1; i++) {
        for (int j=i+1; j<=N/2; j++) {
            start_sum += table[start_team[i]][start_team[j]];
            start_sum += table[start_team[j]][start_team[i]];
            link_sum += table[link_team[i]][link_team[j]];
            link_sum += table[link_team[j]][link_team[i]];
        }
    }

    if (MIN>abs(start_sum-link_sum)) {
        MIN = abs(start_sum-link_sum);
    }
}

void combination(int start, int r) {
    if (r==0) {
        make_team();
        balanced();
    }

    for (int i=start; i<=N; i++) {
        if (!visit[i]) {
            visit[i] = true;
            combination(i+1, r-1);
            visit[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            cin >> table[i][j];
        }
    }

    combination(1, N/2);

    cout << MIN;
}
