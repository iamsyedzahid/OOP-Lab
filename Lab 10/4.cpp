#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    ofstream file("system_log.txt", ios::app);

    if (file.is_open())
    {
        time_t now = time(0);
        char* dt = ctime(&now);
        
        file << "System started at: " << dt;
        file.close();
        cout << "Log entry saved!" << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
