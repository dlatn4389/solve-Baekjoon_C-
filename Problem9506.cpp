#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool contain(vector<int> v, int k) {
    for (int i=0; i<v.size(); i++) {
        if (v[i]==k) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    while (cin>>input) {
        if (input==-1) break;
        vector<int> divider;
        for (int i=1; i<=input; i++) {
            if (input%i==0) {
                if (contain(divider, i)) break;
                if (i==1) divider.push_back(i);
                else if (i==(input/i)) divider.push_back(i);
                else {
                    divider.push_back(i);
                    divider.push_back(input/i);
                }
            }
        }
        sort(divider.begin(), divider.end());
        int sum = 0;
        for (int i: divider) {
            sum += i;
        }
        if (sum==input) {
            cout << input << " = ";
            for (int i=0; i<divider.size(); i++) {
                cout << divider[i];
                if (i!=divider.size()-1) {
                    cout << " + ";
                }
            }
        }
        else {
            cout << input << " is NOT perfect.";
        }
        cout << '\n';
    }
}
