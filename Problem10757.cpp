#include <iostream>
using namespace std;
#include <algorithm>

string add(string A, string B) {
    if (B.length()>A.length()) {
        swap(A, B);
    }

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    string answer = "";
    bool carry = false;
    for (int i=0; i<B.length(); i++) {
        int sum = (A.at(i)-'0')+(B.at(i)-'0');

        if (carry) {
            sum += 1;
            carry = false;
        }

        if (sum>=10) {
            carry = true;
            sum %= 10;
        }

        answer.push_back(sum+'0');
    }

    for (int i=B.length(); i<A.length(); i++) {
        int num = A.at(i)-'0';
        if (carry) {
            num+=1;
            carry = false;
        }
        if (num>=10) {
            carry = true;
            num %= 10;
        }
        answer.push_back(num+'0');
    }

    if (carry) answer.push_back('1');
    reverse(answer.begin(), answer.end());

    return answer;
}

int main() {
    string A, B;
    cin >> A >> B;

    cout << add(A, B);
}
