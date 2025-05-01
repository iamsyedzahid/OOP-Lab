#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("story.txt");
    string line, word;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            while (ss >> word)
            {
                cout << word << endl;
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
