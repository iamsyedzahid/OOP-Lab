#include <iostream>
using namespace std;

class Device  
{
protected:
    string brand;
    string model; 

public:
    Device(string b, string m) : brand(b), model(m) {}

    void displayDevice() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Smartphone : public Device  
{
protected:
    int simSlots;

public:
    Smartphone(string b, string m, int sims) : Device(b, m), simSlots(sims) {}

    void displaySmartphone() const
    {
        displayDevice();
        cout << "SIM Slots: " << simSlots << endl;
    }
};

class Tablet : public Device  
{
protected:
    bool stylusSupport;

public:
    Tablet(string b, string m, bool stylus) : Device(b, m), stylusSupport(stylus) {}

    void displayTablet() const
    {
        displayDevice();
        cout << "Stylus Support: ";
        if (stylusSupport)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};

class HybridDevice : public Smartphone, public Tablet  
{
public:
    HybridDevice(string b, string m, int sims, bool stylus)
        : Smartphone(b, m, sims), Tablet(b, m, stylus) {}

    void displayHybrid() const
    {
        displaySmartphone();
        displayTablet();
    }
};

int main()
{
    HybridDevice h1("Samsung", "UltraProMax", 3, true);

    cout << "Hybrid Device Details:" << endl;
    h1.displayHybrid();  

    return 0;
}
