#include <iostream>

using namespace std;

int main()
{
    int pf_marks, oop_marks, dld_marks, ict_marks;
    int total_marks;
    double average_marks;

    cout << "Enter marks for PF: ";
    cin >> pf_marks;
    
    cout << "Enter marks for OOP: ";
    cin >> oop_marks;

    cout << "Enter marks for DLD: ";
    cin >> dld_marks;

    cout << "Enter marks for ICT: ";
    cin >> ict_marks;

    if (pf_marks < 0 || pf_marks > 100 || oop_marks < 0 || oop_marks > 100 || dld_marks < 0 || dld_marks > 100 || ict_marks < 0 || ict_marks > 100)
    {
        cout << "Invalid Marks Entered." << endl;
        return 0;
    }

    total_marks = pf_marks + oop_marks + dld_marks + ict_marks;
    average_marks = total_marks / 4.0;

    cout << "Total Marks: " << total_marks << endl;
    cout << "Average Marks: " << average_marks << endl;

    if (average_marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (average_marks >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (average_marks >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (average_marks >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}