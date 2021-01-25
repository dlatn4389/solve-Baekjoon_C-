#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int credits = 0;
        double GPAs = 0;
        int credit;
        double GPA;

        while (N--) {
            cin >> credit >> GPA;
            credits += credit;
            GPAs += (double)credit*GPA;
        }
        printf("%d ", credits);
        printf("%.1f\n", (double)GPAs/credits);
    }
}
