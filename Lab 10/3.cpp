#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, email;
    ofstream file("signup.txt", ios::app);

    if (file.is_open())
    {
        while (true)
        {
            cout << "Enter name (or type 'exit' to stop): ";
            getline(cin, name);
            if (name == "exit")
            {
                break;
            }
            cout << "Enter email: ";
            getline(cin, email);
            file << "Name: " << name << ", Email: " << email << endl;
        }
        file.close();
        cout << "Registrations saved!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }
    
    return 0;
}
