#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int arr[100000];

int N;

void initialize() {
  cin >> N;
  for (int i=0; i<N; i++) {
    cin >> arr[i];
  }
}

bool binary_search(int start, int end, int target) {
  if (start>end) return false;
  int mid = (start+end)/2;
  if (arr[mid]==target) return true;
  else if (arr[mid]<target) return binary_search(mid+1, end, target);
  else return binary_search(start, mid-1, target);
}

int main() {
  fast_io();

  initialize();
  sort(arr, arr+N);

  int M; cin >> M;
  while (M--) {
    int in; cin >> in;
    cout << binary_search(0, N-1, in) << '\n';
  }
}