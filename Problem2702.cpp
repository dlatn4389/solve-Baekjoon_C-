#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}

int T; 
const int MAX = 1001;
int nums[MAX];
int num1, num2;

void clear() {
  for (int i=0; i<MAX; i++) {
    nums[i] = 0;
  }
}

int get_gcd() {
  for (int i=1; i<=num1; i++) {
    if (num1%i==0) nums[i]++;
  }
  for (int i=1; i<=num2; i++) {
    if (num2%i==0) nums[i]++;
  }
  int index = 0;
  for (int i=0; i<MAX; i++) {
    if (nums[i]==2) index = i;
  }
  return index;
}

int main() {
  fast_io();

  cin >> T;
  while (T--) {
    cin >> num1 >> num2;
    int gcd = get_gcd();
    cout << num1*num2/gcd << ' ' << gcd << endl;
    clear();
  }

}