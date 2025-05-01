#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream file("secret.txt");
    char ch;
    int count = 0;

    if (file.is_open())
    {
        while (file.get(ch))
        {
            if (isupper(ch))
            {
                count++;
            }
        }
        file.close();
        cout << "Uppercase letters count: " << count << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
