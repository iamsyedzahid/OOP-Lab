#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("article.txt");
    string line;
    file.seekg(0, ios::end);
    streampos endPos = file.tellg();
    streampos middlePos = endPos / 2;

    file.seekg(middlePos, ios::beg);

    for (int i = 0; i < 10; i++)
    {
        getline(file, line);
        cout << line << endl;
    }

    file.close();
    return 0;
}
