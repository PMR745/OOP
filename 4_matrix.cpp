#include<iostream>
using namespace std;

class MAT {
    int r, c;
    int matrix[3][3];
    public:
        void createMatrix(int r, int c);
        void displayMatrix(int r, int c);
        int operator+(MAT x);
};

void MAT::createMatrix(int r, int c) {
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter Matrix Element [" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void MAT::displayMatrix(int r, int c) {
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

int MAT :: operator+(MAT x) {
    int sum_mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_mat[i][j] = matrix[i][j] + x.matrix[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum_mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return sum_mat[3][3];
    
}
int main(){
    MAT m1, m2;
    m1.createMatrix(3, 3);
    m1.displayMatrix(3, 3);
    m2.createMatrix(3, 3);
    m2.displayMatrix(3, 3);
    // m2.operator+(m1);
    cout << "The Addition of Matrix is \n";
    m1 + m2;
    return 0;
}