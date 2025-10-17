#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(const string& n, int a): name(n), age(a) {}
    void display() const { cout << "Name: " << name << ", Age: " << age << endl; }
};
class Student : public Person {
private:
    int roll_number;
public:
    Student(const string& n, int a, int r): Person(n,a), roll_number(r) {}
    void showDetails() const { cout << "Roll No: " << roll_number << endl; }
};
int main() {
    Student s("Sahil", 19, 101);
    s.display();
    s.showDetails();
    return 0;
}
