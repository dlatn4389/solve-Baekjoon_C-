#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 알파벳 소문자의 개수
int l;
// 조교들이 암호로 사용했을 법한 문자의 종류
int c;

// 알파벳 소문자의 정보를 담을 배열
vector<char> alphabets;

// vector<char> 형태를 입력받아 모든 원소를 출력
void print(const vector<char> &v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i];
    }
    cout << '\n';
}

// char c의 모음 여부를 반환
bool is_vowel(char c) {
    if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u') {
        return true;
    }
    return false;
}

void combination(int start, int chosen, vector<char> &ans) {
    // 알파벳 소문자 l개를 모두 선택했을 때
    if (chosen==l) {;
        int consonant_num = 0;
        int vowel_num = 0;
        for (int i=0; i<ans.size(); i++) {
            if (is_vowel(ans[i])) {
                vowel_num++;
            }
            else {
                consonant_num++;
            }
        }
        // 자음 및 모음의 갯수가 조건을 만족할 때만 출력
        if (consonant_num>=2 and vowel_num>=1) {
            // ans를 정렬하면 내부 원소들의 위치가 바뀌므로 복사 후 복사한 배열 정렬
            vector<char> copied(ans);
            sort(copied.begin(), copied.end());
            print(copied);
        }
        return;
    }
    // 백트래킹
    for (int i=start; i<c; i++) {
        ans.push_back(alphabets[i]);
        combination(i+1, chosen+1, ans);
        ans.pop_back();
    }
}

int main() {
    // 크기 입력 및 조정
    cin >> l >> c;
    alphabets.resize(c);
    for (int i=0; i<c; i++) {
        cin >> alphabets[i];
    }
    // vector<char> 정렬
    sort(alphabets.begin(), alphabets.end());

    // 알파벳을 담을 배열 v
    vector<char> v;
    combination(0, 0, v);
}