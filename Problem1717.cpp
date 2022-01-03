#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>
typedef long long ll;

// 입력으로 주어지는 연산의 개수
int m;
// 원소의 최고 값 (0 ~ n)
int n;

const int UNION = 0;
const int FIND = 1;

// 부모 노드를 저장하는 배열
vector<int> parent;

// 부모 노드를 찾아 반환하는 함수
int find_parent(int x) {
    if (parent[x]!=x) {
        parent[x] = find_parent(parent[x]);
    }
    return parent[x];
}

// 합집합 함수
void union_parent(int a, int b) {
    a = find_parent(a);
    b = find_parent(b);
    if (a>b) parent[a] = b;
    else parent[b] = a;
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 입력 및 배열의 크기 조정
    cin >> n >> m;
    parent.resize(n+1);

    // parent 배열 초기화
    for (int i=0; i<=n; i++) {
        parent[i] = i;
    }

    while (m--) {
        int command, a, b;
        cin >> command >> a >> b;

        if (command==UNION) {
            union_parent(a, b);
        }
        else if (command==FIND) {
            if (find_parent(a)==find_parent(b)) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
}