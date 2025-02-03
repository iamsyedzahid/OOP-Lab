#include <iostream>

using namespace std;

int calculate(int* num1, int* num2, char operation)
{
    switch (operation)
    {
        case '+': return *num1 + *num2;
        case '-': return *num1 - *num2;
        case '*': return *num1 * *num2;
        case '/':
            if (*num2 != 0) return *num1 / *num2;
            else
            {
                cout << "Error: Division by zero" << endl;
                return 0;
            }
        default:
            cout << "Error: Invalid operation" << endl;
            return 0;
    }
}

int main()
{
    int num1, num2;
    char operation;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    int result = calculate(&num1, &num2, operation);
    cout << "Result: " << result << endl;

    return 0;
}
