#include <iostream>

using namespace std;

double calculateBill(int units)
{
    double bill = 0;

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    return bill;
}

int main()
{
    int units;
    
    cout << "Enter the number of units consumed: ";
    cin >> units;

    double bill = calculateBill(units);
    double surcharge = bill * 0.20;
    double totalBill = bill + surcharge;

    cout << "Total electricity bill: Rs. " << totalBill << endl;

    return 0;
}
