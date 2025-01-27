#include <iostream>

using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    int answer;
    answer = factorial(number);
    cout << "Factorial of " << number << " is " << answer << "." << endl;

    return 0;
}
