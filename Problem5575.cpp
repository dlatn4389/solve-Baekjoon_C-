#include <iostream>

int main() {
    int comeWork[3];
    int goHome[3];
    for (int i=0; i<3; i++) {
        for (int i=0; i<3; i++) {
            std::cin >> comeWork[i];
        }
        for (int i=0; i<3; i++) {
            std::cin >> goHome[i];
        }
        int hour, min, sec;
        hour = goHome[0]-comeWork[0];
        min = goHome[1]-comeWork[1];
        sec = goHome[2]-comeWork[2];

        if (sec<0) {
            sec += 60;
            min -= 1;
        }
        if (min<0) {
            min += 60;
            hour -= 1;
        }
        std::cout << hour << " " << min << " " << sec << std::endl;
    }
}
