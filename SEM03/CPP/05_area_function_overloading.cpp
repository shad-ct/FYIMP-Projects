#include <iostream>
using namespace std;

class Area {
public:
    
    double area(double radius) {
        return 3.14159 * radius * radius;
    }

   
    double area(int side) {
        return side * side;
    }

    
    double area(int length, int width) {
        return length * width;
    }

    
    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Area obj;
    double radius, base, height;
    int side, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << obj.area(radius) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << obj.area(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << obj.area(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << obj.area(base, height) << endl;

   
}
