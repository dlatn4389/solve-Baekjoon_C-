#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N; cin >> N;
    queue<int> q;
    for (int i=1; i<=N; i++) {
        q.push(i);
    }
    int remove = true;
    while (!q.empty()) {
        if (remove) {
            cout << q.front() << " ";
            q.pop();
            remove = false;
        }
        else {
            q.push(q.front());
            q.pop();
            remove = true;
        }
    }
}
