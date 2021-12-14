#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int N;
int r, c;

#include <vector>
vector<vector<int>> v;

void z(int row, int col, int size, int &cnt) {
    if (size==1) {
        if (row==r and col==c) {
            cout << cnt;
        }
        cnt++;
        return;
    }
    
    int nsize = size/2;
    
    if (r<row+nsize and c<col+nsize) {
        z(row, col, nsize, cnt);
    }
    else if (r<row+nsize and c<col+size) {
        cnt += nsize*nsize;
        z(row, col+nsize, nsize, cnt);
    }
    else if (r<row+size and c<col+nsize) {
        cnt += 2*nsize*nsize;
        z(row+nsize, col, nsize, cnt);
    }
    else {
        cnt += 3*nsize*nsize;
        z(row+nsize, col+nsize, nsize, cnt);
    }
}

int main() {
    cin >> N >> r >> c;
    
    int size = 1;
    while (N--) {
        size *= 2;
    }
    
    int cnt = 0;
    z(0, 0, size, cnt);
}