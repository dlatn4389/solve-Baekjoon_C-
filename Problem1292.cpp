  #include <iostream>
  #include <algorithm>
  using namespace std;

  void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  }

int nums[1001];

int main() {
  for (int i=1; i<1001; i++) {
    nums[i] = i;
  }

  int start, end; cin >> start >> end;

  int index = 0;
  int sum = 0;
  for (int i=1; i<=1000; i++) {
    for (int j=0; j<nums[i]; j++) {
      index++;
      if (index>=start and index<=end) {
        sum += i;
        //cout << i << endl;
      }
    }
  }
  cout << sum;
}