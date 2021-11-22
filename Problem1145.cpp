#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}

const int MAX = 100*100*100+1;
int nums[MAX];

int main() {
  for (int i=0; i<5; i++) {
    int in; cin >> in;
    for (int i=1; in*i<MAX; i++) {
      nums[in*i]++;
    }
  }
  int minimum = 0;
  for (int i=0; i<MAX; i++) {
    if (nums[i]>=3) {
      minimum = i;
      break;
    }
  }
  cout << minimum;
}