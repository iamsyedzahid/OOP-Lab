#include <iostream>

using namespace std;

int main()
{
    int number;
    bool is_prime = true;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1)
    {
        is_prime = false;
    }
    else
    {
        for (int i = 2; i <= number/2; i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }

    return 0;
}