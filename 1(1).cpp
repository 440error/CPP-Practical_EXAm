#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    // Function to calculate transpose of matrix
    void transpose(int matrix[3][3])
    {

        cout << "The Transpose matrix is: \n";
        for (int i = 1; i < 3; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    // Function to calculate the sum of matrices
    void sum(int matrix1[3][3], int matrix2[3][3])
    {
        int matrix3[3][3];
        cout << "The addition of the two matrixes : \n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }

        system("pause");
    }

    // Function to calculate the product of matrices
    void product(int matrix1[3][3], int matrix2[3][3])
    {
        int matrix3[3][3];
        int sum = 0;
        cout << "The multiplication of the two matrices: \n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum = 0;
                for (int k = 0; k < 3; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                matrix3[i][j] = sum;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }

        system("pause");
    }
};

int main()
{
    Matrix obj;

    int matrix1[3][3], matrix2[3][3];

    // Taking elements for matrix 1
    cout << "Enter the matrix1 elements(3x3 matrix):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Taking elements for ,matrix 2
    cout << "Enter the matrix2 elements(3x3 matrix):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Printing elements of matrix 1
    cout << "Matrix 1 is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Printing elements for matrix 2
    cout << "Matrix 2 is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    unsigned choice;

    while (1)
    {
        // system("cls");
        cout << "Enter 1 to get the Sum of matrix1 and matrix2. \n";
        cout << "Enter 2 to get the Product of matrix1 and matrix2.  \n";
        cout << "Enter 3 to get the Transpose of matrix1 and matrix2.  \n";
        cout << "Enter any other value to exit. \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.sum(matrix1, matrix2);
            break;

        case 2:
            obj.product(matrix1, matrix2);
            break;

        case 3:
            unsigned int val;

            cout << "Press 1 for matrix1 and 2 for matrix2 : ";
            cin >> val;

            if (val == 1)
            {
                obj.transpose(matrix1);
            }

            else if (val == 2)
            {
                obj.transpose(matrix2);
            }

            break;

        default:
            cout << "Program ended !" << endl;
            return 0;
        }
    }

    return 0;
}
