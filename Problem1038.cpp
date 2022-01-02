#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>
typedef long long ll;

// 감소하는 수를 저장할 배열
vector<ll> reducing_nums;

// 길이가 length인 감소하는 숫자를 찾아 배열에 추가하는 함수
// 선택한 숫자의 개수(chosen)==길이(length)일 때 숫자를 배열에 추가
// 감소하는 수여야 하므로 start=9부터 시작해 감소
void find_reducing_num(ll num, int start, int chosen, int length) {
    if (chosen==length) {
        reducing_nums.push_back(num);
        return;
    }
    num *= 10;
    for (int i=start; i>=0; i--) {
        find_reducing_num(num+i, i-1, chosen+1, length);
    }
}

int main() {
    // 한 자릿수부터 열 자릿수까지의 감소하는 숫자를 모두 추가
    // 9876543210이 최대이므로 최대 10자리 수
    for (int length=1; length<=10; length++) {
        find_reducing_num(0, 9, 0, length);
    }
    sort(reducing_nums.begin(), reducing_nums.end());

    // 구할 숫자
    int n; cin >> n;
    // n번째 감소하는 숫자가 존재하지 않으면 -1 출력
    if (n>=reducing_nums.size()) {
        cout << -1;
    }
    else {
        cout << reducing_nums[n];
    }
}