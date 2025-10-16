#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];
public:
    void input() {
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                cin >> mat[i][j];
    }
    void display() {
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix m) {
        Matrix temp;
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }
};

int main() {
    Matrix m1, m2, sum;
    cout << "Enter elements of first 2x2 matrix:\n";
    m1.input();
    cout << "Enter elements of second 2x2 matrix:\n";
    m2.input();
    sum = m1 + m2;
    cout << "Sum of matrices:\n";
    sum.display();
    
}
