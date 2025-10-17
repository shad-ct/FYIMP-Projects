#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void input() {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee {
public:
    int empID;
    float salary;

    void input() {
        cout << "Employee ID: ";
        cin >> empID;
        cout << "Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
    }
};

class Manager : public Person, public Employee {
public:
    string department;

    void input() {
        Person::input();
        Employee::input();
        cout << "Department: ";
        cin >> department;
    }

    void display() {
        Person::display();
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    cout << "Enter Manager Details:\n";
    m.input();

    cout << "\nManager Profile:\n";
    m.display();

    return 0;
}