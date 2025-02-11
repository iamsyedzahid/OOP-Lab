#include <iostream>
#include "Employee.h"

void Employee::get_data() {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter monthly salary: ";
    cin >> monthlySalary;
    cout << "Enter tax percentage: ";
    cin >> taxPercentage;
}

double Employee::salary_after_tax() {
    double taxAmount = (taxPercentage / 100) * monthlySalary;
    double salaryAfterTax = monthlySalary - taxAmount;
    return salaryAfterTax;
}

void Employee::update_tax_percentage(double newTaxPercentage) {
    taxPercentage = newTaxPercentage;
    cout << "Tax percentage updated to: " << taxPercentage << "%" << endl;
}

void Employee::display_salary() {
    cout << "Employee: " << name << endl;
    cout << "Monthly Salary: $" << monthlySalary << endl;
    cout << "Tax Percentage: " << taxPercentage << "%" << endl;
    cout << "Salary after tax: $" << salary_after_tax() << endl;
}
