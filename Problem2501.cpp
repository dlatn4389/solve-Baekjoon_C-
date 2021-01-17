#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool contains(vector<int> aliquots, int k) {
    for (int i=aliquots.size()-1; i>=0; i--) {
        if (aliquots[i]==k) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> aliquots;
    int N, K;
    cin >> N >> K;

    for (int i=1; i<N; i++) {
        if (contains(aliquots, i)) {
            break;
        }
        if (N%i==0) {
            aliquots.push_back(i);
            if (contains(aliquots, N/i)) {
                break;
            }
            aliquots.push_back(N/i);
        }
    }
    sort(aliquots.begin(), aliquots.end());

    /*for (int i : aliquots) {
        std::cout << i << std::endl;
    }*/
    int size = aliquots.size();
    if (size<K) {
        std::cout << 0;
        return 0;
    }
    std::cout << aliquots[K-1];
}
