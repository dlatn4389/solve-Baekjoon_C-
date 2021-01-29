    #include <iostream>
    using namespace std;

    int main() {
        string input; cin >> input;
        int answer = 0;

        for (char c : input) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                answer++;
            }
        }
        cout << answer;
    }
