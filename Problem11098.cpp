#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}

int n; 
int p;

int main() {
  fast_io();

  cin >> n;
  while (n--) {
    int p; cin >> p;
    string name = ""; int price = 0;
    while (p--) {
      string name_in; int price_in;
      cin >> price_in >> name_in;
      if (price_in>price) {
        price = price_in;
        name = name_in;
      }
    }
    cout << name << endl;
  }
}