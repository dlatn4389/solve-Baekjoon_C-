#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 노드의 개수
int N;
// 이진 트리의 정보를 담을 배열
char tree[26][2];

void preorder(char node) {
    if (node=='.') return;
    cout << node;
    preorder(tree[node-'A'][0]);
    preorder(tree[node-'A'][1]);
}

void inorder(char node) {
    if (node=='.') return;
    inorder(tree[node-'A'][0]);
    cout << node;
    inorder(tree[node-'A'][1]);
}

void postorder(char node) {
    if (node=='.') return;
    postorder(tree[node-'A'][0]);
    postorder(tree[node-'A'][1]);
    cout << node;
}

int main() {
    cin >> N;
    
    char node, lc, rc;
    for (int i=0; i<N; i++) {
        cin >> node >> lc >> rc;
        tree[node-'A'][0] = lc;
        tree[node-'A'][1] = rc;
    }   
    
    preorder('A');
    cout << endl;
    inorder('A');
    cout << endl;
    postorder('A');
}