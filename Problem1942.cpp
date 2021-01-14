#include <iostream>
#include <vector>
using namespace std;

int getHour(string time) {
    return stoi(time.substr(0, 2));
}

int getMin(string time) {
    return stoi(time.substr(3, 2));
}

int getSec(string time) {
    return stoi(time.substr(6, 2));
}

int timeToInt(int hour, int min, int sec) {
    return 10000*hour + 100*min + sec;
}

int main() {
    string time1, time2;
    int answer;

    for (int i=0; i<3; i++) {
        cin >> time1 >> time2;
        answer = 0;

        int hour1 = getHour(time1);
        int hour2 = getHour(time2);
        int min1 = getMin(time1);
        int min2 = getMin(time2);
        int sec1 = getSec(time1);
        int sec2 = getSec(time2);

        while (!(hour1==hour2 && min1==min2 && sec1==sec2)) {
            if (timeToInt(hour1, min1, sec1)%3==0) {
                answer += 1;
            }

            sec1 += 1;
            if (sec1==60) {
                sec1 = 0;
                min1 += 1;
            }
            if (min1==60) {
                min1 = 0;
                hour1 += 1;
            }
            if (hour1==24) {
                hour1 = 0;
            }
        }
        if (timeToInt(hour2, min2, sec2)%3==0) {
            answer += 1;
        }
        cout << answer << '\n';
    }
}
