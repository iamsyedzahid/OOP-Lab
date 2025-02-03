#include <iostream>

using namespace std;

int main()
{
    int* arr = new int[5];
    int size = 5;
    int count = 0;

    int num;
    cout << "Enter integers (or -1 to stop):" << endl;
    while (cin >> num && num != -1)
      {
        if (count == size)
        {
            int* temp = new int[size * 2];
            for (int i = 0; i < size; ++i)
              {
                temp[i] = arr[i];
              }
            delete[] arr; // Free old memory
            arr = temp;
            size *= 2;
        }
        arr[count++] = num;
    }

    if (count < size)
    {
        int* temp = new int[count];
        for (int i = 0; i < count; ++i)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

    cout << "Elements in the array:" << endl;
    for (int i = 0; i < count; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
