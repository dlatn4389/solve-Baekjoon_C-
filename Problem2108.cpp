#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <algorithm>

int nums[8001] = {0,};

int midValue(int N) {
    int search = 0;
    for (int i=0; i<=8000; i++) {
        int n = nums[i];
        while (n--) {
            if (search==N/2) return i-4000;
            search++;
        }
    }
}

int secondfreq() {
    int maxIndex = 0;
    vector<int> freq;

    for (int i=0; i<=8000; i++) {
        if (nums[i]==nums[maxIndex]) {
            freq.push_back(i);
        }
        else if (nums[i]>nums[maxIndex]) {
            freq.clear();
            freq.push_back(i);
            maxIndex = i;
        }
    }

    if (freq.size()==1) return freq[0]-4000;
    else {
        return freq[1]-4000;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    int sum = 0;
    int min = 4000;
    int max = -4000;
    int mid;

    for (int i=0; i<N; i++) {
        int input; cin >> input;
        nums[input+4000]++;

        sum += input;
        if (min>input) min = input;
        if (input>max) max = input;
    }

    cout << round((double)sum/N) << '\n';
    cout << midValue(N) << '\n';
    cout << secondfreq() << '\n';
    cout << max-min;
}
