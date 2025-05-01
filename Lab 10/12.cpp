#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("example.txt", ios::in);
    streampos offset;
    char ch;

    if (file.is_open())
    {
        cout << "Enter byte offset: ";
        cin >> offset;

        file.seekg(offset, ios::beg);
        cout << "Pointer position: " << file.tellg() << endl;

        for (int i = 0; i < 100 && file.get(ch); i++)
        {
            cout << ch;
        }

        cout << "\nPointer position after reading: " << file.tellg() << endl;
        file.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
