#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

const int MAX_VALUE = 10000+1;
// 자연수의 등장 횟수를 카운트 후 저장하는 배열
int radix[MAX_VALUE+1];

// 자연수의 개수
int n;
// 고르는 수의 개수
int m;

// n개의 자연수를 담는 배열 arr
vector<int> arr;
// 수열을 담는 배열
int *perm;

void permutation(int start, int chosen) {
    if (chosen==m) {
        for (int i=0; i<m; i++) {
            cout << perm[i] << ' ';
        }
        cout << '\n';
        return;
    }
    // radix 배열을 이용하기 때문에 자동으로 정렬된 결과가 출력
    for (int i=start; i<=MAX_VALUE; i++) {
        if (radix[i]>0) {
            radix[i]--;
            // vector를 이용해 push_back 및 pop_back은 많은 시간이 소요되므로 배열을 사용
            perm[chosen] = i;
            permutation(i, chosen+1);
            radix[i]++;
        }
    }
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    arr.resize(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        radix[arr[i]]++;
    }
    perm = new int[m];

    permutation(0, 0);
}