#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double monthlySalary;
    double taxPercentage;

public:
    void get_data() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter monthly salary: ";
        cin >> monthlySalary;
        cout << "Enter tax percentage: ";
        cin >> taxPercentage;
    }

    double salary_after_tax() {
        double taxAmount = (taxPercentage / 100) * monthlySalary;
        double salaryAfterTax = monthlySalary - taxAmount;
        return salaryAfterTax;
    }

    void update_tax_percentage(double newTaxPercentage) {
        taxPercentage = newTaxPercentage;
        cout << "Tax percentage updated to: " << taxPercentage << "%" << endl;
    }

    void display_salary() {
        cout << "Employee: " << name << endl;
        cout << "Monthly Salary: $" << monthlySalary << endl;
        cout << "Tax Percentage: " << taxPercentage << "%" << endl;
        cout << "Salary after tax: $" << salary_after_tax() << endl;
    }
};

int main() {
    Employee employee;
    employee.get_data();
    employee.display_salary();

    double newTax;
    cout << "Enter the new tax percentage to update: ";
    cin >> newTax;
    employee.update_tax_percentage(newTax);

    employee.display_salary();

    return 0;
}
