#include <iostream>
using namespace std;

class Time
{
private:
    double hours;
public:
    Time(double h) : hours(h)
    {
    }
    friend double calculateDistance(const class Speed &s, const Time &t);
};

class Speed
{
private:
    double kmPerHour;
public:
    Speed(double kmh) : kmPerHour(kmh)
    {
    }
    friend double calculateDistance(const Speed &s, const Time &t);
};

double calculateDistance(const Speed &s, const Time &t)
{
    return s.kmPerHour * t.hours;
}

int main()
{
    Speed muqeetSpeed(60.0);
    Time saadTime(2.0);
    double distance = calculateDistance(muqeetSpeed, saadTime);
    cout << "Zahid's car traveled a distance of: " << distance << " km" << endl;
    return 0;
}
