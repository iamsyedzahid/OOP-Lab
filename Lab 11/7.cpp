#include <iostream>
#include <string>
using namespace std;

class OutOfBoundsException {};

template <typename T>
class SmartArray
{
    T* data;
    int size;
public:
    SmartArray(int s)
    {
        size = s;
        data = new T[size];
    }
    ~SmartArray()
    {
        delete[] data;
    }
    T& operator[](int index)
    {
        if (index < 0 || index >= size)
            throw OutOfBoundsException();
        return data[index];
    }
};

int main()
{
    int size = 5;
    SmartArray<int> arr(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i)
        cin >> arr[i];

    try
    {
        cout << "Accessing index 2: " << arr[2] << endl;
        cout << "Accessing index 5: ";
        cout << arr[5] << endl;
    }
    catch (...)
    {
        cout << "OutOfBoundsException caught: Invalid index access attempted!" << endl;
    }

    return 0;
}
