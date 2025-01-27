#include <iostream>

using namespace std;

int main()
{
    int size;
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Total even numbers are " << evenCount << "." << endl;
    cout << "Total odd numbers are " << oddCount << "." << endl;

    return 0;
}