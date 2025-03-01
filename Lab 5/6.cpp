#include <iostream>

using namespace std;

class LoanHelper {
private:
    double loanAmount;
    int months;
    const double interestRate;

public:
    LoanHelper(double amount, int months, double rate) : loanAmount(amount), months(months), interestRate(rate)
    {}

    void calculatePayment() const
    {
        double monthlyPayment = (loanAmount / months) + (loanAmount * interestRate);
        cout << "You have to pay " << monthlyPayment << " every month for " << months << " months to repay your loan." << endl;
    }
};

int main()
{
    double loan;
    int months;
    double rate;

    cout << "Enter loan amount: ";
    cin >> loan;
    cout << "Enter number of months: ";
    cin >> months;
    cout << "Enter interest rate (as a decimal between 0% and 0.5%): ";
    cin >> rate;

    LoanHelper myLoan(loan, months, rate);
    myLoan.calculatePayment();

    return 0;
}
