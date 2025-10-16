#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
    }

   
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main() {
    Rectangle r1;         
    Rectangle r2(10, 5);  

    cout << "Rectangle 1: ";
    r1.display();

    cout << "Rectangle 2: ";
    r2.display();

    
}
