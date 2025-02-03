#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;
     
    // Dynamic allocation for first matrix
    int** matrix1 = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix1[i] = new int[cols];
    }

    cout << "Enter elements for first matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix1[i][j];
        }
    }

    // Dynamic allocation for second matrix
    int** matrix2 = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix2[i] = new int[cols];
    }

    cout << "Enter elements for second matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix2[i][j];
        }
    }

    // Dynamic allocation for result matrix
    int** result = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        result[i] = new int[cols];
    }

    // Matrix Add
    cout << "Matrix Addition Result:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix Subtract
    cout << "Matrix Subtraction Result:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix Multiply
    if (rows == cols)
    {
        cout << "Matrix Multiplication Result:" << endl;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result[i][j] = 0;
                for (int k = 0; k < cols; ++k)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix multiplication is not possible as the matrices are not square." << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
