#include <iostream>
using namespace std;

class TrafficSystem
{
private:
    int value;
public:
    TrafficSystem(int v = 0) : value(v)
    {
    }
    TrafficSystem operator+(const TrafficSystem &other) const
    {
        return TrafficSystem(value + other.value);
    }
    TrafficSystem operator-(const TrafficSystem &other) const
    {
        return TrafficSystem(value - other.value);
    }
    TrafficSystem operator*(const TrafficSystem &other) const
    {
        return TrafficSystem(value * other.value);
    }
    bool operator==(const TrafficSystem &other) const
    {
        return value == other.value;
    }
    void display() const
    {
        cout << value;
    }
};

int main()
{
    TrafficSystem muqeetCars(50);
    TrafficSystem saadCars(20);
    TrafficSystem totalCars = muqeetCars + saadCars;
    cout << "Zahid's traffic simulation:" << endl;
    cout << "After adding Muqeet's 50 cars and Saad's 20 cars, total cars = ";
    totalCars.display();
    cout << endl;
    
    TrafficSystem leavingCars(15);
    TrafficSystem remainingCars = totalCars - leavingCars;
    cout << "After 15 cars leave, remaining cars = ";
    remainingCars.display();
    cout << endl;
    
    TrafficSystem delay(5);
    TrafficSystem delayMultiplier(2);
    TrafficSystem newDelay = delay * delayMultiplier;
    cout << "New delay after doubling = ";
    newDelay.display();
    cout << " minutes" << endl;
    
    TrafficSystem roadA(100);
    TrafficSystem roadB(100);
    cout << "Checking gridlock status:" << endl;
    if(roadA == roadB)
    {
        cout << "Both roads are identical with 100 cars: Gridlock detected!" << endl;
    }
    else
    {
        cout << "Traffic conditions differ between the roads." << endl;
    }
    return 0;
}

