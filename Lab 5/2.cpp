#include <iostream>

using namespace std;

class Battery {
private:
    int capacity; // Ah unit, mAh bhi hosakti hai

public:
    Battery(int cap) : capacity(cap) {}

    void showBatteryDetails() const
    {
        cout << "Battery Capacity: " << capacity << " Ah" << endl;
    } // const issliye kiun k theory k sir ny show details waly function ko constant rakhny ka bola hai
};

class Smartphone {
private:
    string model;
    Battery battery; // Composition, phone destory hoga tou battery bhi hojaye gi

public:
    Smartphone(string mod, int batteryCapacity) : model(mod), battery(batteryCapacity) {}

    void showDetails() const
    {
        cout << "Smartphone Model: " << model << endl;
        battery.showBatteryDetails();
    }
};

int main()
{
    Smartphone myPhone("Zahid ka Phone", 5);
    myPhone.showDetails();
    return 0;
}
