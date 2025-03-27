#include <iostream>
using namespace std;

class Person 
{
protected:
    string name, id, address, phoneNumber, email;

public:
    Person(string n, string i, string a, string p, string e) 
    {
        name = n;
        id = i;
        address = a;
        phoneNumber = p;
        email = e;
    }

    virtual void displayInfo() 
    {
        cout << "Name: " << name << " | ID: " << id << endl;
        cout << "Address: " << address << " | Phone: " << phoneNumber << " | Email: " << email << endl;
    }
};

class Student : public Person 
{
    string coursesEnrolled[5];  // Fixed array for courses (max 5)
    double GPA;
    int enrollmentYear;
    int courseCount;

public:
    Student(string n, string i, string a, string p, string e, double g, int y) : Person(n, i, a, p, e) 
    {
        GPA = g;
        enrollmentYear = y;
        courseCount = 0;
    }

    void enrollCourse(string course) 
    {
        if (courseCount < 5) 
        {
            coursesEnrolled[courseCount++] = course;
        }
        else 
        {
            cout << "Cannot enroll in more courses!" << endl;
        }
    }

    void displayInfo() override 
    {
        Person::displayInfo();
        cout << "GPA: " << GPA << " | Enrollment Year: " << enrollmentYear << endl;
        cout << "Courses Enrolled: ";
        for (int i = 0; i < courseCount; i++) 
        {
            cout << coursesEnrolled[i] << " ";
        }
        cout << endl;
    }
};

class Professor : public Person 
{
    string department;
    string coursesTaught[3];  // Fixed array for courses (max 3)
    double salary;
    int courseCount;

public:
    Professor(string n, string i, string a, string p, string e, string d, double s) : Person(n, i, a, p, e) 
    {
        department = d;
        salary = s;
        courseCount = 0;
    }

    void assignCourse(string course) 
    {
        if (courseCount < 3) 
        {
            coursesTaught[courseCount++] = course;
        }
        else 
        {
            cout << "Cannot assign more courses!" << endl;
        }
    }

    void displayInfo() override 
    {
        Person::displayInfo();
        cout << "Department: " << department << " | Salary: $" << salary << endl;
        cout << "Courses Taught: ";
        for (int i = 0; i < courseCount; i++) 
        {
            cout << coursesTaught[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    Student saad("Saad", "S101", "Karachi", "0300-1234567", "saad@uni.edu", 3.8, 2022);
    Professor muqeet("Muqeet", "P201", "Lahore", "0321-9876543", "muqeet@uni.edu", "CS", 80000);

    saad.enrollCourse("Artificial Intelligence");
    saad.enrollCourse("Data Structures");

    muqeet.assignCourse("Machine Learning");
    muqeet.assignCourse("Operating Systems");

    cout << "\n--- Professor Details ---" << endl;
    muqeet.displayInfo();

    cout << "\n--- Student Details ---" << endl;
    saad.displayInfo();

    return 0;
}
