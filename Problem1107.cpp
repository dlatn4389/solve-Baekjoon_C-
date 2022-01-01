#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 이동하려고 하는 채널의 번호
int n;
// 고장난 버튼의 개수
int m;

bool button_ok[10];

bool can_button(int i) {
    while (1) {
        if (!button_ok[i%10]) return false;
        i /= 10;
        // while (i!=0)이라면, 고장난 버튼이 0번이고 n=0일 때 적절한 처리를 할 수 없다.
        if (i==0) break;
    }
    return true;
}

int int_length(int i) {
    return to_string(i).size();
}

int main() {
    // 입력
    cin >> n;
    cin >> m;
    for (int i=0; i<10; i++) {
        button_ok[i] = true;
    }
    while (m--) {
        int broken_button; cin >> broken_button;
        button_ok[broken_button] = false;
    }

    // + / - 만으로 이동할 때
    int answer = abs(n-100);

    // 버튼 입력을 사용할 때
    for (int i=0; i<=1000000; i++) {
        if (can_button(i)) {
            answer = min(answer, int_length(i)+abs(n-i));
        }
    }
    cout << answer;
}