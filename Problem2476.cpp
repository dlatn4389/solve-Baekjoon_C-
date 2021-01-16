#include <iostream>

int getMax(int one, int two, int three) {
    int max = one;
    if (two>max) {
        max = two;
    }
    if (three>max) {
        max = three;
    }
    return max;
}

int prize(int one, int two, int three) {
    int money;
    if (one==two && two==three) {
        money = 10000+one*1000;
    }
    else if (one!=two && two!=three && three!=one) {
        int max = getMax(one, two, three);
        money = max*100;
    }
    else {
        if (one==two) {
            money = 1000 + one*100;
        }
        else if (two==three) {
            money = 1000 + two*100;
        }
        else {
            money = 1000 + three*100;
        }
    }
    return money;
}

int main() {
    int N, one, two, three;
    std::cin >> N;
    int num;
    int answer = 0;
    while (N--) {
        std::cin >> one >> two >> three;
        num = prize(one, two, three);
        if (num>answer) {
            answer = num;
        }
    }
    std::cout << answer;
}
