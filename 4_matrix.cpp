#include <iostream>
using namespace std;

class MAT
{
    int r, c;
    int matrix[3][3];

public:
    void createMatrix(int r, int c);
    void displayMatrix(int r, int c);
    MAT operator+(MAT x);
    MAT operator-(MAT x);
    MAT operator*(MAT x);
};

void MAT::createMatrix(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter Matrix Element [" << i << "]"
                 << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void MAT::displayMatrix(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

MAT MAT ::operator+(MAT x)
{
    MAT add;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add.matrix[i][j] = matrix[i][j] + x.matrix[i][j];
        }
    }

    return add;
}

MAT MAT ::operator-(MAT x)
{
    MAT sub;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub.matrix[i][j] = matrix[i][j] - x.matrix[i][j];
        }
    }

    return sub;
}

MAT MAT ::operator*(MAT x)
{
    MAT mul;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul.matrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul.matrix[i][j] += matrix[i][k] * x.matrix[k][j];
        }
    }
    return mul;
}

int main()
{
    MAT m1, m2;
    m1.createMatrix(3, 3);
    m1.displayMatrix(3, 3);
    m2.createMatrix(3, 3);
    m2.displayMatrix(3, 3);

    cout << "The Addition of Matrix is \n";
    MAT m3 = m1 + m2;
    m3.displayMatrix(3, 3);

    cout << "\nThe Subraction of Matrix is \n";
    MAT m4 = m1 - m2;
    m4.displayMatrix(3, 3);

    cout << "\nThe Multiplication of Matrix is \n";
    MAT m5 = m1 * m2;
    m5.displayMatrix(3, 3);
    return 0;
}