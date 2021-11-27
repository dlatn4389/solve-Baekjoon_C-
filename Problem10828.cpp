#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

const int MAX = 10000;

class stack {
  private:
    int first = 0;
    int arr[MAX];

  public:
    void push(int n);
    int pop();
    int size();
    bool empty();
    int top();
};

void stack::push(int n) {
  arr[first++] = n;
}

int stack::pop() {
  if (first==0) return -1;
  return arr[first---1];
}

int stack::size() {
  return first;
}

bool stack::empty() {
  return !first;
}

int stack::top() {
  if (first==0) return -1;
  return arr[first-1];
}

int main() {
  fast_io();

  stack s;
  int N; cin >> N;

  while (N--) {
    string command;
    cin >> command;
    if (command=="push") {
      int n; cin >> n;
      s.push(n);
    }
    else if (command=="pop") {
      cout << s.pop() << '\n';
    }
    else if (command=="size") {
      cout << s.size() << '\n';
    }
    else if (command=="empty") {
      cout << s.empty() << '\n';
    }
    else if (command=="top") {
      cout << s.top() << '\n';
    }
  }
}