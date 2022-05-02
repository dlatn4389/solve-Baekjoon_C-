#include <iostream>
#include <algorithm>
using namespace std;
#include <cmath>
#include <unordered_map>

// 산술평균을 반환하는 함수
int average(vector<int> &nums, int N) {
    int sum = 0;
    for (int i: nums) {
        sum += i;
    }

    double answer = (double)sum/N;

    return round(answer);
}

// 중앙값을 반환하는 함수
int midVal(vector<int> nums, int N) {
    sort(nums.begin(), nums.end());

    return nums[N/2];
}

// 최빈값을 반환하는 함수
// 여러 개 있을 때, 최빈값 중 두 번째로 작은 값을 반환
int freqVal(vector<int> &nums) {
    // 나오는 숫자들의 빈도수를 저장할 해쉬맵
    unordered_map<int, int> um;
    for (int i: nums) {
        um[i]++;
    }

    // 가장 자주 나오는 숫자의 빈도
    int maxFreq = 0;
    for (auto p: um) {
        maxFreq = max(maxFreq, p.second);
    }

    // 최빈값들을 저장하는 vector
    vector<int> freqs;
    for (auto p: um) {
        if (p.second==maxFreq) freqs.push_back(p.first);
    }

    // 최빈값들을 정렬
    sort(freqs.begin(), freqs.end());

    // 최빈값이 하나라면, 그대로 반환
    if (freqs.size()==1) return freqs[0];
    // 최빈값이 여러개라면, 두 번째로 작은 값을 반환
    return freqs[1];
}

// 범위를 반환하는 함수
int range(vector<int>& nums) {
    int maxVal = 0;
    int minVal = 99999999;
    for (int i: nums) {
        maxVal = max(maxVal, i);
        minVal = min(minVal, i);
    }

    return (maxVal-minVal);
}

int main() {
    // 빠른 입출력
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 수의 개수
    int N; cin >> N;

    // 정수를 저장할 배열
    vector<int> nums(N);
    for (int i=0; i<N; i++) {
        cin >> nums[i];
    }

    cout << average(nums, N) << endl;
    cout << midVal(nums, N) << endl;
    cout << freqVal(nums) << endl;
    cout << range(nums);
}