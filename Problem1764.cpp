#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

#include <vector>
vector<string> hash_table[54321];

int hash_index(string str) {
  int ans = 0;

  for (int i=0; i<str.length(); i++) {
    ans += ((i+1)*(i+1)*(str[i]-'a'+1))%54321;
  }
  return ans%54321;
}

void hashing(string str) {
  int index = hash_index(str);
  hash_table[index].push_back(str);
}

bool find_name(string str) {
  int index = hash_index(str);
  for (string s: hash_table[index]) {
    if (s==str) {
      return true;
    }
  }
  return false;
}

int main() {
  fast_io();

  int N; int M;
  cin >> N >> M;
  while (N--) {
    string name; cin >> name;
    hashing(name);
  }

  vector<string> names;
  while (M--) {
    string name; cin >> name;
    if (find_name(name)) names.push_back(name);
  }
  cout << names.size() << endl;
  sort(names.begin(), names.end());
  for (string name: names) {
    cout << name << endl;
  }
}