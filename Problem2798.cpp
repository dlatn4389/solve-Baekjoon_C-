#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int cards[N];
    for (int i=0; i<N; i++) {
        cin >> cards[i];
    }
    int subt = M;
    int answer;

    for (int i=0; i<N; i++) {
        if ((N-i)>=3) {
            for (int j=i+1; j<N; j++) {
                if (j!=N-1) {
                    for (int k=j+1; k<N; k++) {
                        int sum = cards[i]+cards[j]+cards[k];
                        if ((M-sum)>=0 && (M-sum)<subt) {
                            subt = M-sum;
                            answer = sum;
                        }
                    }
                }
            }
        }
    }
    cout << answer;
}
