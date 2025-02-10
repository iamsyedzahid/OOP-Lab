#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
    double pi = 3.14159;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return pi * radius * radius;
    }

    double getDiameter()
    {
        return radius * 2;
    }

    double getCircumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    Circle circle;
    double inputRadius;
    cout << "Enter the radius of the circle: ";
    cin >> inputRadius;
    if (inputRadius<0)
    {
        cout<<"Radius cannot be negative."<<endl;
        return 0;
    }
    circle.setRadius(inputRadius);

    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Diameter: " << circle.getDiameter() << endl;
    cout << "Circumference: " << circle.getCircumference() << endl;

    return 0;
}