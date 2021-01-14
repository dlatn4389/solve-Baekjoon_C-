    #include <iostream>

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int abs(int x) {
        if (x<0) {
            return -x;
        }
        return x;
    }

    int main() {
        int num1, num2;
        std::cin >> num1 >> num2;

        if (num1>num2) {
            swap(num1, num2);
        }

        int divide = (num1-1)/4;

        int answer = 0;
        while (!(num2>divide*4 && num2<=(divide+1)*4)) {
            num2 -= 4;
            answer += 1;
        }
        answer += abs(num2-num1);

        std::cout << answer;
    }
