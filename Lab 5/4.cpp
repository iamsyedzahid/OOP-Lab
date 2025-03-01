#include <iostream>

using namespace std;

class Airport {
public:
    string name;
    string location;

    Airport(string n, string loc) : name(n), location(loc) {}

    void display() const
    {
        cout << "Airport: " << name << " in " << location << endl;
    }
};

class Flight {
private:
    string flightNumber;
    string status;
    Airport* currentAirport;

public:
    Flight(string fNum, Airport* initialAirport) : flightNumber(fNum), currentAirport(initialAirport), status("Scheduled") {}

    void takeOff()
    {
        status = "In Air";
        cout << "Flight " << flightNumber << " has taken off from " << currentAirport->name << "." << endl;
    }

    void land(Airport* newAirport)
    {
        status = "Landed";
        currentAirport = newAirport;
        cout << "Flight " << flightNumber << " has landed at " << currentAirport->name << "." << endl;
    }

    void emergencyLanding(Airport* emergencyAirport)
    {
        status = "Emergency Landing";
        currentAirport = emergencyAirport;
        cout << "Crazyy bhai! Flight " << flightNumber << " has been forced to land at " << currentAirport->name << "!" << endl;
    }

    void display() const
    {
        cout << "Flight " << flightNumber << " Status: " << status << endl;
        currentAirport->display();
    }
};

int main()
{
    // airports
    Airport karachi("Zahid International", "Karachi, Pakistan");
    Airport islamabad("Saad International", "Islamabad, Pakistan");
    Airport london("Mawahid Airport", "London, England");

    // flight PK-303
    Flight flightPK303("PK-303", &karachi);

    // takeoff
    flightPK303.display();
    flightPK303.takeOff();

    // Unexpected Hijack
    flightPK303.emergencyLanding(&islamabad);
    flightPK303.display();

    // reaching the destination
    flightPK303.takeOff();
    flightPK303.land(&london);
    flightPK303.display();

    return 0;
}
