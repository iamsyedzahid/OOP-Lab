#include <iostream>
using namespace std;

class SmartDevice 
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void getStatus() = 0;
    virtual ~SmartDevice() {}
};

class LightBulb : public SmartDevice 
{
private:
    bool isOn;
    int brightness;

public:
    LightBulb() 
    {
        isOn = false;
        brightness = 100;
    }

    void turnOn() override
    {
        isOn = true;
    }

    void turnOff() override
    {
        isOn = false;
    }

    void getStatus() override
    {
        cout << "LightBulb is " << (isOn ? "On" : "Off") << " with brightness " << brightness << "%" << endl;
    }
};

class Thermostat : public SmartDevice 
{
private:
    bool isOn;
    double temperature;

public:
    Thermostat() 
    {
        isOn = false;
        temperature = 22.0;
    }

    void turnOn() override
    {
        isOn = true;
    }

    void turnOff() override
    {
        isOn = false;
    }

    void getStatus() override
    {
        cout << "Thermostat is " << (isOn ? "On" : "Off") << " at " << temperature << "°C" << endl;
    }
};

int main() 
{
    LightBulb zahidka;
    Thermostat ahadka;

    zahidka.turnOn();
    zahidka.getStatus();

    ahadka.turnOn();
    ahadka.getStatus();

    zahidka.turnOff();
    ahadka.turnOff();

    zahidka.getStatus();
    ahadka.getStatus();

    return 0;
}
