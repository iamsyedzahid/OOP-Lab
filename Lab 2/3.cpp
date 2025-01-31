#include <iostream>
#include <string>

using namespace std;

int* allocation(int size)
{
    int* ptr = new int[size];
    return ptr;
}

int main()
{
    int size = 5;
    int* arr = allocation(size);

    cout << "Pointer address: " << arr << endl;
    
    delete[] arr;

    return 0;
}
