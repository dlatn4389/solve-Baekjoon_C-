#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

typedef long long ll;

void print(const vector<vector<ll>> &v) {
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

// 행렬 곱셈의 결과를 반환하는 함수
vector<vector<ll>> mul_matrix(const vector<vector<ll>> &v1, const vector<vector<ll>> &v2) {
    int n = v1.size();
    int m = v2.size();
    int k = v2[0].size();

    vector<vector<ll>> ans;
    ans.resize(n);
    for (int i=0; i<n; i++) {
        ans[i].resize(k);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            for (int l=0; l<m; l++) {
                ans[i][j] += v1[i][l]*v2[l][j];
                ans[i][j]%=1000000007;
            }
        }
    }
    return ans;
}

int cnt = 0;

// 피보나치 수열의 i번째 행렬을 구하는 함수
vector<vector<ll>> return_matrix(ll n) {
    /*cnt++;
    cout << "수행된 횟수: " << cnt << endl;*/
    if (n==1) {
        return {{1,1},{1,0}};
    }
    vector<vector<ll>> v = return_matrix(n/2);
    if (n%2==0) {
        return mul_matrix(v, v);
    }
    return mul_matrix(mul_matrix(v, v), {{1,1}, {1,0}});
} 

int main() {
    ll n; cin >> n;
    vector<vector<ll>> answer = return_matrix(n);
    // 피보나치 행렬의 1행 0열이 답
    cout << answer[1][0];
}