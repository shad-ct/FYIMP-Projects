#include <iostream>
#include <string>
using namespace std;
class BankAccount {
protected:
    string account_number;
    double balance;
public:
    BankAccount(const string& acc, double bal): account_number(acc), balance(bal) {}
    void deposit(double amt) { balance += amt; }
    bool withdraw(double amt) {
        if(amt <= balance) { balance -= amt; return true; }
        return false;
    }
    void display() const { cout << "Account: " << account_number << ", Balance: " << balance << endl; }
};
class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;
public:
    SavingsAccount(const string& acc, double bal, double rate): BankAccount(acc,bal), rate_of_interest(rate) {}
    double calculateInterest() const { return balance * rate_of_interest / 100.0; }
    void display() const { BankAccount::display(); cout << "Interest: " << calculateInterest() << endl; }
};
class CurrentAccount : public BankAccount {
private:
    double minimum_balance;
public:
    CurrentAccount(const string& acc, double bal, double minbal): BankAccount(acc,bal), minimum_balance(minbal) {}
    void applyServiceCharge() {
        if(balance < minimum_balance) balance -= 50.0;
    }
    void display() const { BankAccount::display(); cout << "Minimum balance: " << minimum_balance << endl; }
};
int main() {
    SavingsAccount s("SA001", 1000.0, 5.0);
    CurrentAccount c("CA001", 400.0, 500.0);
    s.deposit(200);
    s.display();
    cout << "Interest amount: " << s.calculateInterest() << endl;
    c.display();
    c.applyServiceCharge();
    c.display();
    return 0;
}
