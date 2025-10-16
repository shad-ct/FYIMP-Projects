#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

   
    friend Time addTime(Time t1, Time t2);
};


Time addTime(Time t1, Time t2) {
    Time temp;
    temp.seconds = t1.seconds + t2.seconds;
    temp.minutes = t1.minutes + t2.minutes + temp.seconds / 60;
    temp.seconds = temp.seconds % 60;

    temp.hours = t1.hours + t2.hours + temp.minutes / 60;
    temp.minutes = temp.minutes % 60;

    return temp;
}

int main() {
    Time t1, t2, sum;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    sum = addTime(t1, t2);

    cout << "Sum of times: ";
    sum.display();

   
}
