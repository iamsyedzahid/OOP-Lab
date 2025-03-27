#include <iostream>
using namespace std;

class Shape 
{
protected:
    int px, py;
    string col;
    int border;

public:
    Shape(int x, int y, string c, int b = 1) 
    {
        px = x;
        py = y;
        col = c;
        border = b;
    }

    virtual void drawShape() 
    {
        cout << "Drawing shape at (" << px << "," << py << ") with color " << col << endl;
    }

    virtual double findArea() 
    {
        return 0;
    }

    virtual double findPerimeter() 
    {
        return 0;
    }
};

class Circle : public Shape 
{
    double rad;

public:
    Circle(int x, int y, string c, double r) : Shape(x, y, c) 
    {
        rad = r;
    }

    void drawShape() override 
    {
        cout << "Drawing Circle at (" << px << "," << py << ") with radius " << rad 
             << " color " << col << endl;
    }

    double findArea() override 
    {
        return 3.1416 * rad * rad;
    }

    double findPerimeter() override 
    {
        return 2 * 3.1416 * rad;
    }
};

class Rectangle : public Shape 
{
    double w, h;

public:
    Rectangle(int x, int y, string c, double width, double height) : Shape(x, y, c) 
    {
        w = width;
        h = height;
    }

    void drawShape() override 
    {
        cout << "Drawing Rectangle at (" << px << "," << py << ") with w " << w 
             << " h " << h << " color " << col << endl;
    }

    double findArea() override 
    {
        return w * h;
    }

    double findPerimeter() override 
    {
        return 2 * (w + h);
    }
};

class Triangle : public Shape 
{
    double b, h;

public:
    Triangle(int x, int y, string c, double base, double height) : Shape(x, y, c) 
    {
        b = base;
        h = height;
    }

    void drawShape() override 
    {
        cout << "Drawing Triangle at (" << px << "," << py << ") with base " << b 
             << " height " << h << " color " << col << endl;
    }

    double findArea() override 
    {
        return 0.5 * b * h;
    }

    double findPerimeter() override 
    {
        return b + 2 * h;
    }
};

int main() 
{
    Circle saad(4, 4, "Red", 9);
    saad.drawShape();
    cout << "Circle Area: " << saad.findArea() << endl;
    cout << "Circle Perimeter: " << saad.findPerimeter() << endl;

    cout << "\n";

    Rectangle muqeet(1, 2, "Blue", 7, 5);
    muqeet.drawShape();
    cout << "Rectangle Area: " << muqeet.findArea() << endl;
    cout << "Rectangle Perimeter: " << muqeet.findPerimeter() << endl;

    cout << "\n";

    Triangle zahid(0, 0, "Green", 6, 4);
    zahid.drawShape();
    cout << "Triangle Area: " << zahid.findArea() << endl;
    cout << "Triangle Perimeter: " << zahid.findPerimeter() << endl;

    return 0;
}
