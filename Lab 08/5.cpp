#include <iostream>
#include <string>
using namespace std;

class Teacher;

class Student
{
private:
    string name;
    double grade1, grade2, grade3;
public:
    Student(const string &n, double g1, double g2, double g3) : name(n), grade1(g1), grade2(g2), grade3(g3)
    {
    }
    void displayGrades() const
    {
        cout << name << "'s Grades: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
    }
    friend class Teacher;
    friend double calculateAverageGrade(const Student &s);
};

class Teacher
{
public:
    void updateGrade(Student &s, int gradeNumber, double newGrade)
    {
        switch(gradeNumber)
        {
            case 1: s.grade1 = newGrade; break;
            case 2: s.grade2 = newGrade; break;
            case 3: s.grade3 = newGrade; break;
            default:
                cout << "Invalid grade number." << endl;
        }
    }
};

double calculateAverageGrade(const Student &s)
{
    return (s.grade1 + s.grade2 + s.grade3) / 3.0;
}

int main()
{
    Student zahid("Zahid", 75.0, 82.5, 90.0);
    cout << "Initial grading scenario:" << endl;
    zahid.displayGrades();
    cout << "Average grade: " << calculateAverageGrade(zahid) << endl;
    cout << endl;
    Teacher azan;
    cout << "Teacher Azan updates grade 2 to 95.0..." << endl;
    azan.updateGrade(zahid, 2, 95.0);
    cout << endl;
    cout << "After grade update:" << endl;
    zahid.displayGrades();
    cout << "New average grade: " << calculateAverageGrade(zahid) << endl;
    cout << endl;
    cout << "Friends Muqeet and Saad wish Zahid good luck on his next exam!" << endl;
    return 0;
}
