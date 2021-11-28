#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int arr1[50];
int arr2[50];

int main() {
  int N; cin >> N;
  for (int i=0; i<N; i++) {
    cin >> arr1[i];
  }
  for (int i=0; i<N; i++) {
    cin >> arr2[i];
  }
  sort(arr1, arr1+N);
  sort(arr2, arr2+N);

  int answer = 0;
  for (int i=0; i<N; i++) {
    answer += arr1[i]*arr2[N-i-1];
  }
  cout << answer;
}