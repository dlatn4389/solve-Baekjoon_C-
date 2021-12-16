#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

typedef long long ll;

struct compare {
    bool operator() (const ll a, const ll b) {
        if (abs(a)==abs(b)) {
            return a>b;
        }
        return abs(a)>abs(b);
    }
};

#include <queue>

int main() {
    fast_io();
    // 연산의 개수
    int N; cin >> N;
    priority_queue<ll, vector<ll>, compare> pq;
    
    while (N--) {
        int x; cin >> x;
        if (x==0) {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(x);
        }
    }
}