#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int id;
    string address;
    string phone;
    string email;

public:
    Person(string n, int i, string a, string p, string e) 
    {
        name = n;
        id = i;
        address = a;
        phone = p;
        email = e;
    }

    virtual void displayInfo() 
    {
        cout << "Name: " << name << " | ID: " << id << " | Address: " << address 
             << " | Phone: " << phone << " | Email: " << email << endl;
    }
};

class Student : public Person 
{
    string courses;
    double gpa;
    int year;

public:
    Student(string n, int i, string a, string p, string e, string c, double g, int y) 
        : Person(n, i, a, p, e) 
    {
        courses = c;
        gpa = g;
        year = y;
    }

    void displayInfo() override 
    {
        Person::displayInfo();
        cout << "Courses: " << courses << " | GPA: " << gpa << " | Year: " << year << endl;
    }
};

class Professor : public Person 
{
    string dept;
    string courses;
    double salary;

public:
    Professor(string n, int i, string a, string p, string e, string d, string c, double s) 
        : Person(n, i, a, p, e) 
    {
        dept = d;
        courses = c;
        salary = s;
    }

    void displayInfo() override 
    {
        Person::displayInfo();
        cout << "Department: " << dept << " | Courses: " << courses << " | Salary: $" << salary << endl;
    }
};

class Staff : public Person 
{
    string dept;
    string pos;
    double salary;

public:
    Staff(string n, int i, string a, string p, string e, string d, string po, double s) 
        : Person(n, i, a, p, e) 
    {
        dept = d;
        pos = po;
        salary = s;
    }

    void displayInfo() override 
    {
        Person::displayInfo();
        cout << "Department: " << dept << " | Position: " << pos << " | Salary: $" << salary << endl;
    }
};

class Course 
{
    int courseId;
    string courseName;
    int credits;
    string instructor;
    string schedule;

public:
    Course(int id, string name, int cr, string ins, string sch) 
    {
        courseId = id;
        courseName = name;
        credits = cr;
        instructor = ins;
        schedule = sch;
    }

    void registerStudent(Student &s) 
    {
        cout << s.name << " registered for " << courseName << endl;
    }

    void displayCourse() 
    {
        cout << "Course ID: " << courseId << " | Name: " << courseName 
             << " | Credits: " << credits << " | Instructor: " << instructor 
             << " | Schedule: " << schedule << endl;
    }
};

int main() 
{
    Student saad("Saad", 101, "Karachi", "123456789", "saad@example.com", "AI, ML", 3.7, 2024);
    Professor muqeet("Muqeet", 201, "Lahore", "987654321", "muqeet@example.com", "CS", "OOP, DSA", 75000);
    Staff zahid("Zahid", 301, "Islamabad", "567891234", "zahid@example.com", "Admin", "Manager", 50000);

    Course oop(401, "Object Oriented Programming", 3, "Muqeet", "MWF 10:00AM");

    saad.displayInfo();
    cout << "\n";
    muqeet.displayInfo();
    cout << "\n";
    zahid.displayInfo();
    cout << "\n";

    oop.displayCourse();
    oop.registerStudent(saad);

    return 0;
}
