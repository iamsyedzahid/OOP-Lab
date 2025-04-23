#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string model;
    double rate;
public:
    virtual const double getDailyRate() = 0;
    virtual void displayDetails() = 0;
};

class Car : public Vehicle
{
public:
    Car(string m, double r)
    {
        model = m;
        rate = r;
    }
    const double getDailyRate() override
    {
        return rate;
    }
    void displayDetails() override
    {
        cout << "Car Model: " << model << endl;
        cout << "Daily Rate: Rs" << rate << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike(string m, double r)
    {
        model = m;
        rate = r;
    }
    const double getDailyRate() override
    {
        return rate;
    }
    void displayDetails() override
    {
        cout << "Bike Model: " << model << endl;
        cout << "Daily Rate: Rs" << rate << endl;
    }
};

int main() 
{
    Car zahid("Toyota Corolla", 70.0);
    Bike ahad("Yamaha R15", 30.0);

    Vehicle* v;

    v = &zahid;
    v->displayDetails();
    cout << "Daily Rate: Rs" << v->getDailyRate() << endl;

    v = &ahad;
    v->displayDetails();
    cout << "Daily Rate: Rs" << v->getDailyRate() << endl;

    return 0;
}
