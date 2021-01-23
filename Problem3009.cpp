#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int width[3];
    int height[3];

    for (int i=0; i<3; i++) {
        cin >> width[i] >> height[i];
    }

    sort(width, width+3);
    sort(height, height+3);

    int nWidth, nHeight;

    if (width[0]==width[1]) {
        nWidth = width[2];
    }
    else if (width[1]==width[2]) {
        nWidth = width[0];
    }
    if (height[0]==height[1]) {
        nHeight = height[2];
    }
    else if (height[1]==height[2]) {
        nHeight = height[0];
    }
    cout << nWidth << " " << nHeight;
}
