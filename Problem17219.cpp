#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

pair<string, string> sites_and_passwords[100000];

bool cmp(pair<string, string> p1, pair<string, string> p2) {
  return p1.first<p2.first;
}

int main() {
  fast_io();

  int N, M;
  cin >> N >> M;
  for (int i=0; i<N; i++) {
    string site, password;
    cin >> site >> password;
    sites_and_passwords[i] = {site, password};
  }
  sort(sites_and_passwords, sites_and_passwords+N, cmp);

  while (M--) {
    string site; cin >> site;
    int start = 0;
    int end = N-1;

    string password;
    while (start<=end) {
      int mid = (start+end)/2;
      if (sites_and_passwords[mid].first==site) {
        password = sites_and_passwords[mid].second;
        break;
      }
      else if (sites_and_passwords[mid].first>site) {
        end = mid-1;
      }
      else {
        start = mid+1;
      }
    }
    cout << password << '\n';
  }
}