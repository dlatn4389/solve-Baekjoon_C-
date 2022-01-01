#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

vector<vector<int>> dp;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    dp.resize(s1.length()+1);
    for (int i=0; i<dp.size(); i++) {
        dp[i].resize(s2.length()+1);
    }

    int row_size = s1.length()+1;
    int col_size = s2.length()+1;

    for (int i=1; i<row_size; i++) {
        for (int j=1; j<col_size; j++) {
            if (s1[i-1]==s2[j-1]) {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else {
                if (dp[i-1][j]>dp[i][j-1]) {
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }

    cout << dp[row_size-1][col_size-1];
}