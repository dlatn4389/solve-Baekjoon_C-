#include <iostream>

long long max = 9223372036854775807;
long long min = -9223372036854775807;

int main() {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int N;
    int overflow;
    int underflow;
    long long sum;
    long long value;
    for (int i=0; i<3; i++) {
        std::cin >> N;
        overflow = 0;
        underflow = 0;
        sum = 0;
        for (int i=0; i<N; i++) {
            std::cin >> value;
            if (value>0) {
                if (sum>max-value) {
                    overflow++;
                    continue;
                }
            }
            else if (value<0) {
                if (sum<min-value) {
                    underflow++;
                    continue;
                }
            }
            sum += value;
        }
        if (overflow==0 && underflow==0) {
            if (sum>0) {
                std::cout << "+";
            }
            else if (sum<0) {
                std::cout << "-";
            }
            else {
                std::cout << "0";
            }
        }
        else if (overflow>underflow) {
            std::cout << "+";
        }
        else if (overflow<underflow) {
            std::cout << "-";
        }
        else if (overflow==underflow) {
            if (sum>0) {
                std::cout << "+";
            }
            else if (sum<0) {
                std::cout << "-";
            }
            else {
                std::cout << "0";
            }
        }
        std::cout << '\n';
    }
}
