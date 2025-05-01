#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student
{
private:
    char name[50];
    int id;
    float gpa;

public:
    void setStudentDetails()
    {
        cout << "Enter student name: ";
        cin.getline(name, 50);
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter GPA: ";
        cin >> gpa;
        cin.ignore();
    }

    void writeToFile()
    {
        ofstream file("students.dat", ios::binary);

        if (file.is_open())
        {
            file.write(reinterpret_cast<char*>(this), sizeof(*this));
            file.close();
        }
        else
        {
            cout << "Unable to open file!" << endl;
        }
    }

    void readFromFile()
    {
        ifstream readFile("students.dat", ios::binary);

        if (readFile.is_open())
        {
            readFile.read(reinterpret_cast<char*>(this), sizeof(*this));
            cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << endl;
            readFile.close();
        }
        else
        {
            cout << "Unable to open file!" << endl;
        }
    }
};

int main()
{
    Student student;
    student.setStudentDetails();
    student.writeToFile();
    student.readFromFile();

    return 0;
}
