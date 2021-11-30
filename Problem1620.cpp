#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

bool cmp(pair<int, string> p1, pair<int, string> p2) {
  return p1.second<p2.second;
}

pair<int, string> arr_for_sort[100000];
string arr[100000];

bool is_digit(string str) {
  for (char c: str) {
    if (c<'0' or c>'9') return false;
  }
  return true;
}

int main() {
  fast_io();

  int N, M;
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    string pocketmon; cin >> pocketmon;
    arr_for_sort[i] = {i+1, pocketmon};
    arr[i] = pocketmon;
  }

  sort(arr_for_sort, arr_for_sort+N, cmp);

  while (M--) {
    string in; cin >> in;
    if (is_digit(in)) {
      cout << arr[stoi(in)-1] << '\n';
    }
    else {
      int start = 0;
      int end = N-1;

      int answer;
      while (start<=end) {
        int mid = (start+end)/2;
        //cout << "mid: " << mid << endl;
        if (arr_for_sort[mid].second==in) {
          answer = arr_for_sort[mid].first;
          break;
        }
        else if (arr_for_sort[mid].second>in) {
          end = mid-1;
        }
        else {
          start = mid+1;
        }
      }
      cout << answer << '\n';
    }
  }
}