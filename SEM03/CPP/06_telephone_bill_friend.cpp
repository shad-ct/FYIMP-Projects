#include <iostream>
using namespace std;

class TelephoneBill {
    string Name;
    string Address;
    string TelNo;
    int NoOfCalls;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Address: ";
        cin >> Address;
        cout << "Enter Telephone Number: ";
        cin >> TelNo;
        cout << "Enter Number of Calls: ";
        cin >> NoOfCalls;
    }

    friend void calculateAmount(TelephoneBill t);
};

void calculateAmount(TelephoneBill t) {
    int amount = t.NoOfCalls * 2;
    cout << "\nName: " << t.Name << endl;
    cout << "Address: " << t.Address << endl;
    cout << "Telephone Number: " << t.TelNo << endl;
    cout << "Number of Calls: " << t.NoOfCalls << endl;
    cout << "Amount to be paid: Rs. " << amount << endl;
}

int main() {
    TelephoneBill t;
    t.input();
    calculateAmount(t);
    
}
