#include <iostream>
using namespace std;

class Currency 
{
protected:
    double amount;
    string code;
    string symbol;
    double exchangeRate;

public:
    Currency(double amt, string c, string s, double rate = 1.0) 
    {
        amount = amt;
        code = c;
        symbol = s;
        exchangeRate = rate;
    }

    virtual double convertToBase() 
    {
        return amount * exchangeRate;
    }

    virtual double convertTo(double targetRate) 
    {
        return (amount * exchangeRate) / targetRate;
    }

    virtual void displayCurrency() 
    {
        cout << "Currency: " << code << " | Symbol: " << symbol << " | Amount: " << amount << endl;
    }
};

class Dollar : public Currency 
{
public:
    Dollar(double amt) : Currency(amt, "USD", "$", 1.0) {}

    void displayCurrency() override 
    {
        cout << "Dollar: $" << amount << endl;
    }
};

class Euro : public Currency 
{
public:
    Euro(double amt) : Currency(amt, "EUR", "€", 1.1) {}

    void displayCurrency() override 
    {
        cout << "Euro: €" << amount << endl;
    }
};

class Rupee : public Currency 
{
public:
    Rupee(double amt) : Currency(amt, "INR", "₹", 0.012) {}

    void displayCurrency() override 
    {
        cout << "Rupee: ₹" << amount << endl;
    }
};

int main() 
{
    Dollar saad(100);
    Euro muqeet(50);
    Rupee zahid(5000);

    saad.displayCurrency();
    muqeet.displayCurrency();
    zahid.displayCurrency();

    cout << "\nConverting 100 USD to EUR: " << saad.convertTo(1.1) << " EUR" << endl;
    cout << "Converting 50 EUR to INR: " << muqeet.convertTo(0.012) << " INR" << endl;

    return 0;
}
