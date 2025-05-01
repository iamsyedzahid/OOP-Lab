#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string entry;
    ofstream file("diary.txt", ios::app);
    
    if (file.is_open())
    {
        cout << "Enter your diary entry (type 'exit' to stop):" << endl;
        while (true)
        {
            getline(cin, entry);
            if (entry == "exit")
            {
                break;
            }
            file << entry << endl;
        }
        file.close();
        cout << "Diary entries saved!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
