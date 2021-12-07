#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

// 입력의 크기
int N;

#include <vector>
// 원소를 저장할 vector
vector<int> v;

int main() {
  fast_io();

  cin >> N;
  for (int i=0; i<N; i++) {
    int in; cin >> in;
    v.push_back(in);
  }
  
  // 정렬을 위한 copy_v vector: v 복사
  vector<int> copy_v(v);
  sort(copy_v.begin(), copy_v.end());
  // 정렬 후 중복된 원소 제거
  copy_v.erase(unique(copy_v.begin(), copy_v.end()), copy_v.end());

  // vector v의 각 원소마다 이진탐색을 실행
  for (int i: v) {
    int start = 0;
    int end = copy_v.size()-1;
    int answer;
    while (start<=end) {
      int mid = (start+end)/2;
      if (copy_v[mid]==i) {
        answer = mid;
        break;
      }
      else if (copy_v[mid]>i) {
        end = mid-1;
      }
      else {
        start = mid+1;
      }
    }
    cout << answer << ' ';
  }
}