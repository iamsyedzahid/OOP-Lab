#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Employee employee1, employee2, employee3;

    cout << "Employee 1 data:" << endl;
    employee1.get_data();
    employee1.display_salary();

    cout << "\nEmployee 2 data:" << endl;
    employee2.get_data();
    employee2.display_salary();

    cout << "\nEmployee 3 data:" << endl;
    employee3.get_data();
    employee3.display_salary();

    double newTax;
    cout << "\nEnter the new tax percentage for Employee 1: ";
    cin >> newTax;
    employee1.update_tax_percentage(newTax);
    employee1.display_salary();

    return 0;
}
