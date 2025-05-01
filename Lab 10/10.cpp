#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("backup_log.txt", ios::app);
    string logMessage;

    if (file.is_open())
    {
        while (true)
        {
            cout << "Enter log message (or 'exit' to quit): ";
            getline(cin, logMessage);
            if (logMessage == "exit")
            {
                break;
            }

            file << logMessage << endl;
            cout << "Current file size: " << file.tellp() << " bytes" << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
