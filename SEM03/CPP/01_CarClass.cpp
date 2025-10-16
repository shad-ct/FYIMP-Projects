// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class Car{
public : 
  string model;
  string brand;
  int year;
  void readDetails(){
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }
  void displayDetails(){
      cout << "Model : " <<model;
      cout << "\nBrand : "<<brand;
      cout << "\nYear : "<<year;
  }
  
  
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:\n";
    car1.readDetails();

    cout << "\nEnter details for Car 2:\n";
    car2.readDetails();

    cout << "\nEnter details for Car 3:\n";
    car3.readDetails();

    cout << "\n--- Car Details ---\n";
    car1.displayDetails();
    cout << "\n---  ---\n";
    car2.displayDetails();
    cout << "\n---  ---\n";
    car3.displayDetails();
}
