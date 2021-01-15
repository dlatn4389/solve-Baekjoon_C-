#include <iostream>

void getAnswer(int N, int M, int& answer) {
    //std::cout << "N x M : " << N << " * " << M << '\n';
    if (N==1 && M==1) {
        return;
    }
    else if (N+M==3) {
        answer += 1;
        return;
    }
    else if (N==2 && M==2) {
        answer += 3;
        return;
    }
    else {
        answer += 1;
        if (N<=M) {
            if (M%2==0) {
                getAnswer(N, M/2, answer);
                getAnswer(N, M/2, answer);
                return;
            }
            getAnswer(N, M/2, answer);
            getAnswer(N, M/2+1, answer);
            return;
        }
        else {
            if (N%2==0) {
                getAnswer(N/2, M, answer);
                getAnswer(N/2, M, answer);
                return;
            }
            getAnswer(N/2, M, answer);
            getAnswer(N/2+1, M, answer);
            return;
        }
    }
}

int main() {
    int N, M;
    std::cin >> N >> M;
    int answer = 0;
    getAnswer(N, M, answer);
    std::cout << answer;
}
