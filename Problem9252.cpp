#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

vector<vector<string>> lcs;

int main() {
    // 입력 및 배열 크기 조정
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.length();
    int size2 = s2.length();

    lcs.resize(size1+1);
    for (int i=0; i<=size1; i++) {
        lcs[i].resize(size2+1);
    }

    for (int i=1; i<=size1; i++) {
        for (int j=1; j<=size2; j++) {
            if (s1[i-1]==s2[j-1]) {
                lcs[i][j] = lcs[i-1][j-1];
                lcs[i][j] += s1[i-1];
            }
            else {
                if (lcs[i-1][j].length()>lcs[i][j-1].length()) {
                    lcs[i][j] = lcs[i-1][j];
                }
                else {
                    lcs[i][j] = lcs[i][j-1];
                }
            }
        }
    }

    int length = lcs[size1][size2].length();
    cout << length;

    if (length==0) return 0;
    cout << lcs[size1][size2];
}