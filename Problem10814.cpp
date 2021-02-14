#include <iostream>
#include <algorithm>
using namespace std;

class Customer {
public:
    int age;
    string name;
    int num;
    Customer(int age, string name, int num): age(age), name(name), num(num) {}
    Customer() {}
    void printInfo() {
        cout << age << ' ' << name << '\n';
    }
};

bool compare(Customer c1, Customer c2) {
    if (c1.age==c2.age) {
        return c1.num < c2.num;
    }
    return c1.age < c2.age;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    Customer customer[N];

    for (int i=0; i<N; i++) {
        int age;
        string name;
        cin >> age >> name;
        customer[i] = Customer(age, name, i);
    }

    sort(customer, customer+N, compare);

    for (Customer c : customer) {
        c.printInfo();
    }
}
