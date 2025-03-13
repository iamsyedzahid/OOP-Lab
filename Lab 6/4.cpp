// code has errors, we stdied in theory that its diamond problem,
// we havent done solution yet, so i am getting issues in this code and also in question 6
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    string studentID;
    int gradeLevel;
public:
    Student(string n, int a, string id, int grade) : Person(n, a), studentID(id), gradeLevel(grade) {}

    void displayStudent() const {
        Person::displayPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
    int roomNumber;
public:
    Teacher(string n, int a, string sub, int room) : Person(n, a), subject(sub), roomNumber(room) {}

    void displayTeacher() const {
        Person::displayPerson();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string n, int a, string id, int grade, string sub, int room) : Person(n, a), Student(n, a, id, grade), Teacher(n, a, sub, room) {}

    void displayGraduateStudent() const {
        cout << "Graduate Student Details:" << endl;
        Student::displayPerson();
        displayStudent();
        displayTeacher();
        cout << "Address: " << this << endl;
    }
};

int main() {
    GraduateStudent g1("Ali Ahmed", 22, "24K015", 16, "AI", 29);
    g1.displayGraduateStudent();
    return 0;
}
