#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string m, string modl, int y) : make(m), model(modl), year(y) {}

    void displayVehicle() const
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
protected:
    int numberOfDoors;
    double fuelEfficiency;

public:
    Car(string m, string modl, int y, int doors, double efficiency)
        : Vehicle(m, modl, y), numberOfDoors(doors), fuelEfficiency(efficiency) {}

    void displayCar() const
    {
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Fuel Efficiency: " << fuelEfficiency << " km/l" << endl;
    }
};

class ElectricCar : public Car
{
protected:
    double batteryLife;

public:
    ElectricCar(string m, string modl, int y, int doors, double efficiency, double batteryL)
        : Car(m, modl, y, doors, efficiency), batteryLife(batteryL) {}

    void displayElectricCar() const
    {
        displayCar();
        cout << "Battery Life: " << batteryLife << " km" << endl;
    }
};

int main()
{
    ElectricCar ZahidkiTesla("munnu", "Model Pakistanb", 2070, 2, 20.0, 600.0);

    cout << "Electric Car Details:" << endl;
    ZahidkiTesla.displayElectricCar();

    return 0;
}
