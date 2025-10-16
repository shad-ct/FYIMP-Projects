#include <iostream>
using namespace std;

class Book {
private:
    int BookID;
    char BookName[50];
    float BookPrice;

public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Name: ";
        cin >> BookName; 
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() {
        cout << "Book ID: " << BookID << ", Name: " << BookName << ", Price: Rs " << BookPrice << endl;
    }

    float total_cost(int n) {
        return BookPrice * n;
    }
};

int main() {
    Book book1, book2, book3;
    int copies;

    cout << "Enter details for book 1:\n";
    book1.inputDetails();
    cout << "Enter number of copies: ";
    cin >> copies;
    book1.displayDetails();
    cout << "Total cost: Rs " << book1.total_cost(copies) << "\n\n";

    cout << "Enter details for book 2:\n";
    book2.inputDetails();
    cout << "Enter number of copies: ";
    cin >> copies;
    book2.displayDetails();
    cout << "Total cost: Rs " << book2.total_cost(copies) << "\n\n";

    cout << "Enter details for book 3:\n";
    book3.inputDetails();
    cout << "Enter number of copies: ";
    cin >> copies;
    book3.displayDetails();
    cout << "Total cost: Rs " << book3.total_cost(copies) << "\n";

    
}
