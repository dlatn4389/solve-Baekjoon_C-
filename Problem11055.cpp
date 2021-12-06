#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

// 값을 저장할 배열
int arr[1000];
// i번째 원소까지 증가 부분 수열 중 합이 가장 큰 것을 저정할 배열
int dp[1000];

int max(int a, int b) {
  return a > b ? a : b;
}

int main() {
  int N; cin >> N;
  for (int i=0; i<N; i++) {
    cin >> arr[i];
    dp[i] = arr[i];
  }

  for (int i=1; i<N; i++) {
    for (int j=0; j<i; j++) {
      // i번째 원소보다 이전 원소들 arr[j] 기준으로,
      // arr[j]<arr[i]라면 값을 갱신해줌.
      // j는 0 ~ i-1 번째까지 탐색하기 때문에, 두번째 for 문이 종료되었을 때
      // dp[i]는 최적의 값(자세한 건 백준 예제를 토대로 손으로 디버깅 해볼 것)
      if (arr[j]<arr[i]) {
        dp[i] = max(dp[i], dp[j]+arr[i]);
      }
    }
  }

  int maximum = 0;
  for (int i: dp) {
    if (i>maximum) maximum = i;
  }
  cout << maximum;
}