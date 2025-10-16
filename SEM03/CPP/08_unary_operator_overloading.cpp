#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() {
        count = 0;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

   
    void operator++() {
        count = count + 1;
    }
};

int main() {
    Counter c;

    c.display(); 

    ++c;          
    c.display();

    ++c;
    c.display();

   
}
