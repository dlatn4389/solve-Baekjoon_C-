#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

// 단어의 길이
int L;
// 단어의 개수
int N;

void print(const vector<string>& v) {
    for (string s: v) {
        cout << s << endl;
    }
}

// 순열을 실행하는 함수
/*
 * start: index가 중복되지 않도록 하는 시작 index
 * chosen: 선택 후 남은(더 선택해야 할) 원소의 개수
 * answer: 답을 저장할 배열
 * visited: 방문 여부를 저장하는 배열
 * words: 단어들을 저장하는 배열
*/
bool permutation(int chosen_left, vector<string>& answer, vector<bool> &visited, const vector<string>& words) {
    if (chosen_left==0) {
        for (int i=0; i<L; i++) {
            string str = answer[i];
            for (int j=0; j<L; j++) {
                if (answer[j][i]!=str[j]) return false;
            }
        }
        print(answer);
        return true;
    }

    bool find_answer = false;

    for (int i=0; i<N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            answer.push_back(words[i]);
            find_answer = permutation(chosen_left - 1, answer, visited, words);
            // 반복문의 종료 조건: 조건을 만족하는 answer을 찾는다면, 즉시 반복문을 종료
            if (find_answer) break;
            answer.pop_back();
            visited[i] = false;
        }
    }
    return find_answer;
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 단어의 길이 및 단어의 개수 입력
    cin >> L >> N;

    // 단어 저장
    vector<string> words(N);
    for (int i=0; i<N; i++) {
        cin >> words[i];
    }

    // 사전 순으로 정렬
    sort(words.begin(), words.end());

    // 조합 시, 방문 여부의 정보를 담고 있는 vector
    vector<bool> visited(N);

    // 정답을 저장하는 배열
    vector<string> answer;

    if (!permutation(L, answer, visited, words)) {
        cout << "NONE";
    };
}
