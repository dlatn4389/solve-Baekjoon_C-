#include <iostream>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    std::cout << tm.tm_year+1900 << "-0" << tm.tm_mon+1 << "-0" << tm.tm_mday << std::endl;
}
