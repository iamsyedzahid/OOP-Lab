#include <iostream>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double capacityL;
    double capacityML;

public:
    WaterBottle(string cmp, string col, double capL)
    {
        company = cmp;
        color = col;
        capacityL = capL;
        capacityML = capL * 1000;
    }

    void setCompany(string cmp)
    {
        company = cmp;
    }

    string getCompany()
    {
        return company;
    }

    void setColor(string col)
    {
        color = col;
    }

    string getColor()
    {
        return color;
    }

    double getCapacityL()
    {
        return capacityL;
    }

    double getCapacityML()
    {
        return capacityML;
    }

    void drinkWater(double mlDrank)
    {
        if (mlDrank <= capacityML)
        {
            capacityML -= mlDrank;
            capacityL = capacityML / 1000;
        }
        else
        {
            cout << "You cannot drink more water than the current capacity!" << endl;
        }
    }

    void displayInfo()
    {
        cout << "Water Bottle Info:" << endl;
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Capacity: " << capacityL << " liters (" << capacityML << " milliliters)" << endl;
    }
};

int main()
{
    WaterBottle myBottle("HydroFlask", "Blue", 1.5);

    myBottle.displayInfo();

    double waterDrank;
    cout << "How much water (in milliliters) have you drunk? ";
    cin >> waterDrank;

    myBottle.drinkWater(waterDrank);

    myBottle.displayInfo();

    return 0;
}