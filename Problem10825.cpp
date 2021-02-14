#include <iostream>
using namespace std;
#include <algorithm>

class Student {
public:
    string name;
    int kor, eng, math;
    Student() {}
    Student(string name, int kor, int eng, int math): name(name), kor(kor), eng(eng), math(math) {}
    void printName() {
        cout << name << '\n';
    }
};

bool compare(Student s1, Student s2) {
    if (s1.kor==s2.kor && s1.eng==s2.eng && s1.math==s2.math) {
        return s1.name < s2.name;
    }
    else if (s1.kor==s2.kor && s1.eng==s2.eng) {
        return s1.math > s2.math;
    }
    else if (s1.kor==s2.kor) {
        return s1.eng < s2.eng;
    }
    return s1.kor > s2.kor;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    Student students[N];

    for (int i=0; i<N; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students+N, compare);

    for (Student s : students) {
        s.printName();
    }
}
