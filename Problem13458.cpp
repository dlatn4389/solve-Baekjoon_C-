#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    int students[N];
    for (int i=0; i<N; i++) {
        cin >> students[i];
    }
    int B, C; cin >> B >> C;

    long long answer = 0;
    for (int stud : students) {
        stud -= B;
        answer++;
        if (stud>0) {
            answer += stud/C;
            if (stud%C!=0) {
                answer++;
            }
        }
    }
    cout << answer;
}
