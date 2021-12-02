#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

string C[101][101];

string big_add(string str1, string str2) {
  if (str2.length()>str1.length()) {
    swap(str1, str2);
  }
  string ans="";
  bool carry = false;
  reverse(str1.begin(), str1.end());
  reverse(str2.begin(), str2.end());

  for (int i=0; i<str2.length(); i++) {
    char c = str1[i]+str2[i]-'0';
    if (carry) {
      c += 1;
      carry = false;
    }
    if (c>'9') {
      c -= 10;
      carry = true;
    }
    ans += c;
  }

  for (int i=str2.length(); i<str1.length(); i++) {
    char c = str1[i];
    if (carry) {
      c += 1;
      carry = false;
    }
    if (c>'9') {
      c -= 10;
      carry = true;
    }
    ans += c;
  }
  if (carry) {
    ans += '1';
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

string combination(int n, int k) {
  if (C[n][k]!="") {
    return C[n][k];
  }
  if (k>n-k) return combination(n, n-k);
  if (k==0) {
    C[n][k] = "1";
  }
  else if (k==1) {
    C[n][k] = to_string(n);
  }
  else {
    C[n][k] = big_add(combination(n-1, k-1), combination(n-1, k));
  }
  return C[n][k];
}

int main() {
  int n, k; cin >> n >> k;
  cout << combination(n, k);
}