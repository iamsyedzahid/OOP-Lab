#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file("draft.txt", ios::in | ios::out);
    string line;
    
    if (file.is_open())
    {
        while (getline(file, line))
        {
            int pos = line.find("teh");
            if (pos != string::npos)
            {
                line.replace(pos, 3, "the");
                file.seekp(file.tellg());
                file << line << endl;
                break;
            }
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
