#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, message;
    
    cout << "Enter recipient's name: ";
    getline(cin, name);
    
    cout << "Enter your message: ";
    getline(cin, message);
    
    ofstream file("greeting.txt");
    
    if (file.is_open())
    {
        file << "Dear " << name << ",\n" << message << "\nBest Regards!";
        file.close();
        cout << "Greeting saved successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }
    
    return 0;
}
