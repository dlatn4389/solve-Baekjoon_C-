#include <iostream>
#include <algorithm>
using namespace std;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

//이 문제의 핵심은 -가 등장한 경우 문장이 끝나거나, 다음 -가 등장하거나
//혹은 다음 -가 등장하기 전까지 존재하는 모든 +는 괄호로 묶어주어야 한다는 것.
// ex) 55-50+40-50+50-10 => 55-(50+40)-(50+50)-10

#include <vector>
vector<int> nums;
vector<bool> plus_minus;
// string을 parsing한 뒤 숫자와 덧셈, 뺄셈 여부를 담아둘 vector
// plus_minus의 경우, 1 -> plus, 0 -> minus

// vector<int> nums와 vector<bool> plus_minus를 initialize
void initialize(string str) {
  // nums.size()의 경우 반드시 plus_minus.size()보다 1 작음.
  // 문제를 용이하게 해결하기 위해 처음에 vector<bool> plus_minus에 push_back(1)
  plus_minus.push_back(true);
  string num = "";
  for (char c: str) {
    if (c=='+' or c=='-') {
      nums.push_back(stoi(num));
      if (c=='+') plus_minus.push_back(true);
      else plus_minus.push_back(false);
      num = "";
    }
    else {
      num += c;
    }
  }
  nums.push_back(stoi(num));
}

int main() {
  string str; cin >> str;
  initialize(str);
  
  int temp_sum = 0;
  // 잠시 합을 담아둘 variable
  int answer = 0;
  for (int i=plus_minus.size()-1; i>=0; i--) {
    if (plus_minus[i]) {
      temp_sum += nums[i];
      // plus_minus[i]==true(즉, 덧셈)일 경우 temp_sum에 숫자를 더해주면 끝.
    }
    else {
      temp_sum += nums[i];
      answer -= temp_sum;
      // plus_minus[i]==false(즉, 뺄셈)일 경우 뒤에 등장하는 덧셈에 모두 괄호를 붙여야 함.
      // 따라서 일단 temp_sum에 nums[i]를 더해준 후 answer에서 subtract.
      temp_sum = 0;
      // 물론 그 후 temp_sum은 초기화해주어야 한다.
    }
  }
  answer += temp_sum;
  // 위의 for문에서는 마지막 temp_sum 값이 answer에 add되지 않으므로 추가.

  cout << answer;
}