#include <iostream>
using namespace std;

class AreaCalculator {
public:
    

    inline double circle(double radius) {
        return 3.14159 * radius * radius;
    }

    inline double square(double side) {
        return side * side;
    }

    inline double rectangle(double length, double width) {
        return length * width;
    }

    inline double triangle(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calc;
    double radius, side, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calc.circle(radius) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << calc.square(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << calc.rectangle(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calc.triangle(base, height) << endl;

    
}
