#include <iostream>
#include <algorithm>
using namespace std;

#include <vector>

// 톱니바퀴를 시계방향으로 회전
void rotate_clock(string &s) {
    char c = s[s.length()-1];
    for (int i=s.length()-1; i>0; i--) {
        s[i] = s[i-1];
    }
    s[0] = c;
}

// 톱니바퀴를 반시계방향으로 회전
void rotate_counterclock(string &s) {
    char c = s[0];
    for (int i=0; i<s.length()-1; i++) {
        s[i] = s[i+1];
    }
    s[s.length()-1] = c;
}

int main() {
    // 톱니바퀴의 정보 입력
    string gear1, gear2, gear3, gear4;
    cin >> gear1 >> gear2 >> gear3 >> gear4;

    int k; cin >> k;
    while (k--) {
        int num, direction;
        cin >> num >> direction;

        // 1번 톱니바퀴를 처음에 돌릴 때
        if (num==1) {
            bool gear2_spin_with_gear1 = false;
            bool gear3_spin_with_gear2 = false;
            bool gear4_spin_with_gear3 = false;
            if (gear1[2]!=gear2[6]) gear2_spin_with_gear1 = true;
            if (gear2[2]!=gear3[6]) gear3_spin_with_gear2 = true;
            if (gear3[2]!=gear4[6]) gear4_spin_with_gear3 = true;

            // 반시계방향 회전
            if (direction==-1) {
                rotate_counterclock(gear1);
                if (gear2_spin_with_gear1) {
                    rotate_clock(gear2);
                    if (gear3_spin_with_gear2) {
                        rotate_counterclock(gear3);
                        if (gear4_spin_with_gear3) {
                            rotate_clock(gear4);
                        }
                    }
                }
            }
            // 시계방향 회전
            else {
                rotate_clock(gear1);
                if (gear2_spin_with_gear1) {
                    rotate_counterclock(gear2);
                    if (gear3_spin_with_gear2) {
                        rotate_clock(gear3);
                        if (gear4_spin_with_gear3) {
                            rotate_counterclock(gear4);
                        }
                    }
                }
            }
        }
        // 2번 톱니바퀴를 처음에 돌릴 때
        else if (num==2) {
            bool gear1_spin_with_gear2 = false;
            bool gear3_spin_with_gear2 = false;
            bool gear4_spin_with_gear3 = false;
            if (gear1[2]!=gear2[6]) gear1_spin_with_gear2 = true;
            if (gear2[2]!=gear3[6]) gear3_spin_with_gear2 = true;
            if (gear3[2]!=gear4[6]) gear4_spin_with_gear3 = true;
            
            if (direction==-1) {
                rotate_counterclock(gear2);
                if (gear1_spin_with_gear2) rotate_clock(gear1);
                if (gear3_spin_with_gear2) {
                    rotate_clock(gear3);
                    if (gear4_spin_with_gear3) {
                        rotate_counterclock(gear4);
                    }
                }
            }
            else {
                rotate_clock(gear2);
                if (gear1_spin_with_gear2) rotate_counterclock(gear1);
                if (gear3_spin_with_gear2) {
                    rotate_counterclock(gear3);
                    if (gear4_spin_with_gear3) {
                        rotate_clock(gear4);
                    }
                }
            }
        }
        // 3번 톱니바퀴를 처음에 돌릴 때
        else if (num==3) {
            bool gear1_spin_with_gear2 = false;
            bool gear2_spin_with_gear3 = false;
            bool gear4_spin_with_gear3 = false;
            if (gear1[2]!=gear2[6]) gear1_spin_with_gear2 = true;
            if (gear2[2]!=gear3[6]) gear2_spin_with_gear3 = true;
            if (gear3[2]!=gear4[6]) gear4_spin_with_gear3 = true;
            
            if (direction==-1) {
                rotate_counterclock(gear3);
                if (gear4_spin_with_gear3) rotate_clock(gear4);
                if (gear2_spin_with_gear3) {
                    rotate_clock(gear2);
                    if (gear1_spin_with_gear2) {
                        rotate_counterclock(gear1);
                    }
                }
            }
            else {
                rotate_clock(gear3);
                if (gear4_spin_with_gear3) rotate_counterclock(gear4);
                if (gear2_spin_with_gear3) {
                    rotate_counterclock(gear2);
                    if (gear1_spin_with_gear2) {
                        rotate_clock(gear1);
                    }
                }
            }
        }
        // 4번 톱니바퀴를 처음에 돌릴 때
        else {
            bool gear1_spin_with_gear2 = false;
            bool gear2_spin_with_gear3 = false;
            bool gear3_spin_with_gear4 = false;
            if (gear1[2]!=gear2[6]) gear1_spin_with_gear2 = true;
            if (gear2[2]!=gear3[6]) gear2_spin_with_gear3 = true;
            if (gear3[2]!=gear4[6]) gear3_spin_with_gear4 = true;

            if (direction==-1) {
                rotate_counterclock(gear4);
                if (gear3_spin_with_gear4) {
                    rotate_clock(gear3);
                    if (gear2_spin_with_gear3) {
                        rotate_counterclock(gear2);
                        if (gear1_spin_with_gear2) {
                            rotate_clock(gear1);
                        }
                    }
                }
            }
            else {
                rotate_clock(gear4);
                if (gear3_spin_with_gear4) {
                    rotate_counterclock(gear3);
                    if (gear2_spin_with_gear3) {
                        rotate_clock(gear2);
                        if (gear1_spin_with_gear2) {
                            rotate_counterclock(gear1);
                        }
                    }
                }
            }
        }
    }

    int sum = 0;
    if (gear1[0]=='1') sum += 1;
    if (gear2[0]=='1') sum += 2;
    if (gear3[0]=='1') sum += 4;
    if (gear4[0]=='1') sum += 8;

    cout << sum;
}