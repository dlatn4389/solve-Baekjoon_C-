#include <iostream>
using namespace std;

bool NotselfNum[10001]={0,};

int selfNum(int n) {
    string num = to_string(n);
    int ans = n;
    for (char c : num) {
        ans += c-'0';
    }
    return ans;
}

int main() {
    for (int i=1; i<10000; i++) {
        int num = selfNum(i);
        if (num<=10000) {
            NotselfNum[num] = true;
        }
    }

    for (int i=1; i<10001; i++) {
        if (!NotselfNum[i]) {
            cout << i << '\n';
        }
    }
}
