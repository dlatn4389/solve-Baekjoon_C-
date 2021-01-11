#include <iostream>

int main() {
    int birth_year, birth_mon, birth_day, year, mon, day;
    std::cin >> birth_year;
    std::cin >> birth_mon;
    std::cin >> birth_day;
    std::cin >> year;
    std::cin >> mon;
    std::cin >> day;

    int age1, age2, age3;
    age3 = year-birth_year;
    age2 = age3+1;
    age1 = age3;

    if (birth_mon>mon) {
        age1--;
    }
    else if (birth_mon==mon && birth_day>day) {
        age1--;
    }
    std::cout << age1 << std::endl;
    std::cout << age2 << std::endl;
    std::cout << age3 << std::endl;
}
