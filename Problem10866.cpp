#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

class deque {
  private:
    int first = 10000;
    int last = 10001;
    int arr[20000];

  public:
    void push_front(int);
    void push_back(int);
    int pop_front();
    int pop_back();
    int size();
    bool empty();
    int front();
    int back();
};

int deque::size() {
  if (last>first) {
      return last-first-1;
  }
  return NULL;
}

bool deque::empty() {
  return !size();
}

void deque::push_front(int n) {
  arr[first--] = n;
}

void deque::push_back(int n) {
  arr[last++] = n;
}

int deque::pop_front() {
  if (empty()) return -1;
  return arr[++first];
}

int deque::pop_back() {
  if (empty()) return -1;
  return arr[--last];
}

int deque::front() {
  if (empty()) return -1;
  return arr[first+1];
}

int deque::back() {
  if (empty()) return -1;
  return arr[last-1];
}

int main() {
  fast_io();

  deque d;
  int N; cin >> N;

  while (N--) {
    string command; cin >> command;
    if (command=="push_back") {
      int n; cin >> n;
      d.push_back(n);
    }
    else if (command=="push_front") {
      int n; cin >> n;
      d.push_front(n);
    }
    else if (command=="pop_front") {
      cout << d.pop_front() << endl;
    }
    else if (command=="pop_back") {
      cout << d.pop_back() << endl;
    }
    else if (command=="front") {
      cout << d.front() << endl;
    }
    else if (command=="back") {
      cout << d.back() << endl;
    }
    else if (command=="size") {
      cout << d.size() << endl;
    }
    else if (command=="empty") {
      cout << d.empty() << endl;
    }
  }
}