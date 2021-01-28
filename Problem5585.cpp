#include <iostream>
using namespace std;

int main() {
    int coins[6] = {500, 100, 50, 10, 5, 1};
    int money; cin >> money;
    int remain = 1000-money;

    int answer = 0;
    for (int i=0; i<6; i++) {
        int coinNum = remain/coins[i];
        answer += coinNum;
        remain -= coinNum*coins[i];
    }
    cout << answer;
}
