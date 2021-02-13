#include <iostream>
using namespace std;
#include <vector>

vector<pair<int, int>> move_save;

void move(int num, int from, int to, int another) {
    if (num==1) {
        move_save.push_back({from, to});
    }
    else {
        move(num-1, from, another, to);
        move(1, from, to, another);
        move(num-1, another, to, from);
    }
}

int main() {
    int N; cin >> N;

    move(N, 1, 3, 2);

    cout << move_save.size() << '\n';
    for (pair<int, int> p : move_save) {
        cout << p.first << " " << p.second << '\n';
    }
}
