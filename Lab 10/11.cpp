#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream file("article.txt");
    string line;
    int charCount = 0, wordCount = 0, lineCount = 0, punctuationCount = 0;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            lineCount++;
            bool inWord = false;
            for (char ch : line)
            {
                charCount++;
                if (isalpha(ch))
                {
                    inWord = true;
                }
                else if (isspace(ch) && inWord)
                {
                    wordCount++;
                    inWord = false;
                }
                else if (ispunct(ch))
                {
                    punctuationCount++;
                }
            }
            if (inWord) wordCount++;
        }
        file.close();

        ofstream report("report.txt");
        if (report.is_open())
        {
            report << "Total characters: " << charCount << endl;
            report << "Total words: " << wordCount << endl;
            report << "Total lines: " << lineCount << endl;
            report << "Punctuation marks: " << punctuationCount << endl;
            report.close();
        }
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
