#include <iostream>
using namespace std;

class SmartDevice {
public:
    string deviceName;
    string deviceType;
    string status;

    SmartDevice(string name, string type, string state) {
        deviceName = name;
        deviceType = type;
        status = state;
        cout << deviceName << " (" << deviceType << ") is now " << status << ".\n";
    }

    ~SmartDevice() {
        cout << "Goodbye, " << deviceName << " (" << deviceType << "). Powering down...\n";
    }
};

int main()
{
    SmartDevice light("Living Room Light", "Light", "on");
    SmartDevice vacuum("Robo-Vacuum", "Vacuum", "on");
    SmartDevice coffee("Coffee Machine", "Coffee Maker", "off");

    return 0;
}
