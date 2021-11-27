#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

const int MAX = 10000;

class queue {
  private:
    int first = 0;
    int last = 0;
    int arr[MAX];

  public:
    void push(int n);
    int pop();
    int size();
    bool empty();
    int front();
    int back();
};

void queue::push(int n) {
  arr[last++] = n;
}

int queue::pop() {
  if (empty()) return -1;
  return arr[first++];
}

int queue::size() {
  return last-first;
}

bool queue::empty() {
  return !size();
}

int queue::front() {
  if (empty()) return -1;
  return arr[first];
}

int queue::back() {
  if (empty()) return -1;
  return arr[last-1];
}

int main() {
  fast_io();
  
  queue q;
  int N; cin >> N;

  while (N--) {
    string command; cin >> command;
    if (command=="push") {
      int n; cin >> n;
      q.push(n);
    }
    else if (command=="pop") {
      cout << q.pop() << '\n';
    }
    else if (command=="size") {
      cout << q.size() << '\n';
    }
    else if (command=="empty") {
      cout << q.empty() << '\n';
    }
    else if (command=="front") {
      cout << q.front() << '\n';
    }
    else if (command=="back") {
      cout << q.back() << '\n';
    }
  }
}