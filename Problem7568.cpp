#include <iostream>
#include <vector>
using namespace std;

class Person {
private:
    int height;
    int weight;
    int th;
public:
    Person(int, int);
    bool isSmall(Person);
    void setTh(int);
    void printTh();
};

Person::Person(int height, int weight): height(height), weight(weight) {}

bool Person::isSmall(Person p) {
    if (height<p.height && weight<p.weight) return true;
    return false;
}

void Person::setTh(int th) {
    this->th = th;
}

void Person::printTh() {
    cout << th << ' ';
}

int main() {
    int N; cin >> N;
    vector<Person> people;
    for (int i=0; i<N; i++) {
        int height, weight;
        cin >> weight >> height;
        people.push_back(Person(height, weight));
    }
    for (int i=0; i<N; i++) {
        int th = 1;
        for (int j=0; j<N; j++) {
            if (j!=i) {
                if (people[i].isSmall(people[j])) {
                    th++;
                }
            }
        }
        people[i].setTh(th);
    }

    for (Person p : people) {
        p.printTh();
    }
}
