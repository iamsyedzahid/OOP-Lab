#include <iostream>
using namespace std;

class InsufficientFundsException {};

class BankAccount
{
    int balance;
public:
    BankAccount(int b) : balance(b) {}
    void withdraw(int amount)
    {
        if (amount > balance)
            throw InsufficientFundsException();
        balance -= amount;
        cout << "Withdrawal successful! New Balance: $" << balance << endl;
    }
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(500);
    cout << "Current Balance: $" << account.getBalance() << endl;

    try
    {
        cout << "Enter withdrawal amount: $";
        int amount;
        cin >> amount;
        account.withdraw(amount);
    }
    catch (...)
    {
        cout << "Error: Insufficient funds to complete withdrawal!" << endl;
    }

    cout << "Current Balance: $" << account.getBalance() << endl;

    return 0;
}
