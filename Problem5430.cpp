#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>
#include <deque>

// 테스트케이스의 개수
int t;
// 수행할 함수
string p;
// 배열에 들어있는 수의 개수
int n;

// deque의 원소들을 문제에서 원하는 형태로 출력하는 함수
string deque_to_string(deque<int> &dq, bool reverse) {
    string ans = "";
    ans += '[';

    while (!dq.empty()) {
        int i;
        if (reverse) {
            i = dq.back();
            dq.pop_back();
        }
        else {
            i = dq.front();
            dq.pop_front();
        }
        ans += to_string(i);
        ans += ',';
    }
    // string ans 마지막에 불필요한 ,가 있다면 ]로 바꿔줌
    if (ans[ans.length()-1]==',') {
        ans[ans.length()-1] = ']';
    }
    // 그렇지 않다면 ]를 추가
    else {
        ans += ']';
    }

    return ans;
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // 테스트케이스의 개수 입력
    cin >> t;

    while (t--) {
        // 문제에서 사용할 deque
        deque<int> dq;
        // 배열에 있는 숫자의 순서를 뒤집을지 여부를 저장하는 변수
        bool reverse = false;

        // 수행할 함수 및 원소의 개수 입력
        cin >> p;
        cin >> n;

        // 배열에 들어있는 수
        string elements; cin >> elements;

        // deque에 원소를 추가
        // 두자릿수 이상인 숫자가 존재할 수 있으므로 아래와 같은 방식으로 추가
        int value = 0;
        for (char c: elements) {
            if (c>='0' and c<='9') {
                value *= 10;
                value += c-'0';
            }
            else {
                // value>0 조건을 추가하지 않으면 무의미한 0 값이 deque에 들어감
                if (value>0) {
                    dq.push_back(value);
                    value = 0;
                }
            }
        }

        // 에러가 발생했는지, 즉 배열이 비어있는 데 D를 사용했는지 여부 확인
        bool error_occured = false;

        for (char c: p) {
            // 함수 R이라면, reverse의 값을 반대로 바꾼다.
            if (c=='R') {
                reverse = !reverse;
            }
            // 함수 D라면, reverse의 값에 따라 전/후에서 원소를 하나 제거
            else if (c=='D') {
                // deque가 비어있지 않고 reverse = true이면, 가장 뒤에서 원소 하나 제거
                if (!dq.empty() and reverse) {
                    dq.pop_back();
                }
                // deque가 비어있지 않고 reverse = false이면, 가장 앞에서 원소 하나 제거
                else if (!dq.empty() and !reverse) {
                    dq.pop_front();
                }
                // deque가 비어있으면, 에러 발생
                else {
                    error_occured = true;
                    // 이미 에러가 발생했으므로 연산을 줄이기 위해 반복문 종료
                    break;
                }
            }
        }

        // 에러 메시지 출력
        if (error_occured) {
            cout << "error" << endl;
        }
        else {
            cout << deque_to_string(dq, reverse) << endl;
        }
    }
}