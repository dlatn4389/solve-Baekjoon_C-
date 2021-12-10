/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 부등호의 개수
// 숫자의 개수는 k+1개가 됨
int k;
// 숫자를 저장하는 배열
int arr[10];
// 선택된 숫자를 저장하는 배열
int perm[10];
// 부등호를 저장하는 배열
char sign_of_inequality[9];
// 방문 여부를 저장하는 배열
bool visited[10];

// 부등호를 만족하는 최댓값
long long maximum = 0;
// 부등호를 만족하는 최솟값
long long minimum = 9999999999;

void permutation(int chosen) {
    if (chosen==k+1) {
        for (int i=0; i<k; i++) {
            if (sign_of_inequality[i]=='<') {
                if (perm[i]>perm[i+1]) return;
            }
            else {
                if (perm[i]<perm[i+1]) return;
            }
        }
        long long num = perm[0];
        for (int i=1; i<k+1; i++) {
            num *= 10;
            num += perm[i];
        }
        if (num>maximum) maximum = num;
        if (minimum>num) minimum = num;
        return;
    }
    for (int i=0; i<10; i++) {
        if (!visited[i]) {
            visited[i] = true;
            perm[chosen] = arr[i];
            permutation(chosen+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> k;
    for (int i=0; i<10; i++) {
        arr[i] = i;
    }
    for (int i=0; i<k; i++) {
        cin >> sign_of_inequality[i];
    }
    permutation(0);
    
    // 부족한 0을 출력
    if (to_string(maximum).length()<k+1) {
        for (int i=0; i<(k+1)-to_string(maximum).length(); i++) {
            cout << '0';
        }
    }
    cout << maximum;
    cout << '\n';
    // 부족한 0을 출력
    if (to_string(minimum).length()<k+1) {
        for (int i=0; i<(k+1)-to_string(minimum).length(); i++) {
            cout << '0';
        }
    }
    cout << minimum;
}