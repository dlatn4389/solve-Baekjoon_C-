#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int binomial[1001][1001];

int binomial_coefficient(int n, int k) {
    if (binomial[n][k]!=0) return binomial[n][k];
    
    if (k>n-k) {
        binomial[n][k] = binomial_coefficient(n, n-k);
    }
    else if (k==0) {
        binomial[n][k] = 1;
    }
    else if (k==1) {
        binomial[n][k] = n;
    }
    else {
        binomial[n][k] = (binomial_coefficient(n-1, k-1)+binomial_coefficient(n-1, k))%10007;
    }
    return binomial[n][k];
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << binomial_coefficient(N, K);
}