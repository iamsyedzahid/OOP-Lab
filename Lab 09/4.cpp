#include <iostream>
#include <cstring>
using namespace std;

class PaymentMethod 
{
public:
    virtual bool processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod 
{
private:
    char cardNumber[20];

public:
    CreditCard(const char* number) 
    {
        strncpy(cardNumber, number, sizeof(cardNumber) - 1);
        cardNumber[sizeof(cardNumber) - 1] = '\0';
    }

    bool processPayment(double amount) 
    {
        if (strlen(cardNumber) == 16) 
        {
            cout << "Credit Card payment of $" << amount << " successful" << endl;
            return true;
        } 
        else 
        {
            cout << "Invalid credit card number" << endl;
            return false;
        }
    }
};

class DigitalWallet : public PaymentMethod 
{
private:
    double balance;

public:
    DigitalWallet(double initialBalance) 
    {
        balance = initialBalance;
    }

    bool processPayment(double amount) 
    {
        if (balance >= amount) 
        {
            balance -= amount;
            cout << "Digital Wallet payment of $" << amount << " successful" << endl;
            return true;
        } 
        else 
        {
            cout << "Insufficient wallet balance" << endl;
            return false;
        }
    }
};

int main() 
{
    CreditCard zahidCard("1234567812345678");
    DigitalWallet ahadWallet(100.0);

    PaymentMethod* payment;

    payment = &zahidCard;
    payment->processPayment(50.0);

    payment = &ahadWallet;
    payment->processPayment(60.0);
    payment->processPayment(50.0);

    return 0;
}
