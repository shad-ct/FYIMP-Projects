#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    string model;
    int year;
    void read() {
        cout << "Enter brand: ";
        getline(cin, brand);
        cout << "Enter model: ";
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cin.ignore();
    }
    void display() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
    Car() : brand("Unknown"), model("Unknown"), year(0) {}
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}
};
int main() {
    Car c1("Toyota", "Corolla", 2018);
    Car c2("Honda", "Civic", 2020);
    Car c3("Ford", "Mustang", 1969);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}