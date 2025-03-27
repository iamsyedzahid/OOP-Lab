#include <iostream>
using namespace std;

class Account 
{
protected:
    int accNo;
    double bal;
    string holder;
    string type;

public:
    Account(int acc, double b, string h, string t = "General") 
    {
        accNo = acc;
        bal = b;
        holder = h;
        type = t;
    }

    virtual void deposit(double amt) 
    {
        if (amt > 0) 
        {
            bal += amt;
            cout << "Added: $" << amt << " | New Balance: $" << bal << endl;
        } 
        else 
        {
            cout << "Invalid amount!" << endl;
        }
    }

    virtual void withdraw(double amt) 
    {
        if (amt > 0 && amt <= bal) 
        {
            bal -= amt;
            cout << "Taken: $" << amt << " | Balance left: $" << bal << endl;
        } 
        else 
        {
            cout << "Not enough balance!" << endl;
        }
    }

    virtual void calcInterest() 
    {
        cout << "Interest depends on account type." << endl;
    }

    virtual void showStatement() 
    {
        cout << "Statement for " << holder << " | Balance: $" << bal << endl;
    }
};

class SavingsAcc : public Account 
{
    double rate;
    double minBal;

public:
    SavingsAcc(int acc, double b, string h, double r, double m) : Account(acc, b, h, "Savings") 
    {
        rate = r;
        minBal = m;
    }

    void calcInterest() override 
    {
        double interest = (bal * rate) / 100;
        cout << "Earned Interest: $" << interest << endl;
    }

    void withdraw(double amt) override 
    {
        if (bal - amt < minBal) 
        {
            cout << "Can't withdraw! Need min balance." << endl;
        } 
        else 
        {
            Account::withdraw(amt);
        }
    }
};

class FixedAcc : public Account 
{
    double fixedRate;
    int months;

public:
    FixedAcc(int acc, double b, string h, double r, int m) : Account(acc, b, h, "Fixed Deposit") 
    {
        fixedRate = r;
        months = m;
    }

    void calcInterest() override 
    {
        double interest = (bal * fixedRate * months) / (100 * 12);
        cout << "Interest after " << months << " months: $" << interest << endl;
    }

    void withdraw(double amt) override 
    {
        cout << "Withdrawal not allowed before time!" << endl;
    }
};

int main() 
{
    SavingsAcc saad(101, 9000, "Saad", 3.5, 2000);
    saad.deposit(1500);
    saad.calcInterest();
    saad.withdraw(8000);
    saad.showStatement();

    cout << "\n";

    FixedAcc muqeet(102, 15000, "Muqeet", 5, 12);
    muqeet.calcInterest();
    muqeet.withdraw(1000);
    muqeet.showStatement();

    return 0;
}
