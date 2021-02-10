#include <iostream>
using namespace std;

bool computer_used[101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    int answer = 0;
    while (N--) {
        int input; cin >> input;
        if (!computer_used[input]) {
            computer_used[input] = true;
        }
        else {
            answer++;
        }
    }
    cout << answer;
}