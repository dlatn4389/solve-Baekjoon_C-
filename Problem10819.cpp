#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

// 배열의 길이
int N;
// 원소를 저장할 배열
int arr[8];

// 순열 계산 시 방문 여부를 저장할 배열
bool visited[8];
// 순열을 저장할 배열
int perm[8];

// 절댓값을 반환
int abs(int k) {
  return k < 0 ? -k : k;
}

// 최댓값을 저장할 변수
int maximum = 0;

void permutation(int chosen) {
  // N개의 원소를 모두 선택했을 때, 수식 실행
  if (chosen==N) {
    int sum = 0;
    for (int i=0; i<N-1; i++) {
      sum += abs(perm[i]-perm[i+1]);
    }
    // sum이 더 크면 최댓값 갱신
    if (sum>maximum) maximum = sum;
    return;
  }
  for (int i=0; i<N; i++) {
    if (!visited[i]) {
      visited[i] = true;
      perm[chosen] = arr[i];
      permutation(chosen+1);
      visited[i] = false;
    }
  }
}

int main() {
  cin >> N;
  for (int i=0; i<N; i++) {
    cin >> arr[i];
  }
  permutation(0);
  cout << maximum;
}