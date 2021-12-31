#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

typedef long long ll;

// 거듭제곱할 행렬
vector<vector<int>> matrix;

// 행렬을 출력하는 함수
void print(const vector<vector<int>> &v) {
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

// 행렬 곱셈을 반환하는 함수
vector<vector<int>> mul_matrix(const vector<vector<int>> &v1, const vector<vector<int>> &v2) {
    // 정사각행렬
    int n = v1.size();
    
    vector<vector<int>> ans;
    ans.resize(n);
    for (int i=0; i<n; i++) {
        ans[i].resize(n);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int l=0; l<n; l++) {
                ans[i][j] += v1[i][l]*v2[l][j];
            }
            ans[i][j] %= 1000;
        }
    }
    return ans;
}

int cnt = 0;

// 행렬 거듭제곱을 반환하는 함수
vector<vector<int>> involution(const ll n) {
    if (n==1) return matrix;
    vector<vector<int>> half = involution(n/2);
    if (n%2==0) {
        return mul_matrix(half, half);
    }
    return mul_matrix(mul_matrix(half, half), matrix);
}

int main() {
    // 행렬의 크기
    int n;
    // 거듭제곱할 횟수
    ll b;
    cin >> n >> b;

    // 거듭제곱할 행렬 크기 조정
    matrix.resize(n);
    for (int i=0; i<n; i++) {
        matrix[i].resize(n);
    }
    
    // 행렬의 정보 입력
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> matrix[i][j];
            // 이 문제의 함정. 입력은 1000이 들어오나 출력은 1000이 되어서는 안 됨.
            matrix[i][j] %= 1000;
        }
    }
    print(involution(b));
}