#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    double real;
    double imaginary;
public:
    ComplexNumber(double r = 0, double i = 0) : real(r), imaginary(i)
    {
    }
    ComplexNumber operator+(const ComplexNumber &other) const
    {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }
    ComplexNumber operator-(const ComplexNumber &other) const
    {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }
    ComplexNumber operator*(const ComplexNumber &other) const
    {
        double newReal = (real * other.real) - (imaginary * other.imaginary);
        double newImaginary = (real * other.imaginary) + (imaginary * other.real);
        return ComplexNumber(newReal, newImaginary);
    }
    bool operator==(const ComplexNumber &other) const
    {
        return (real == other.real) && (imaginary == other.imaginary);
    }
    void display() const
    {
        cout << real;
        if(imaginary >= 0)
            cout << " + " << imaginary << "i";
        else
            cout << " - " << -imaginary << "i";
    }
};

int main()
{
    ComplexNumber zahidComplex(3, 4);
    ComplexNumber muqeetComplex(1, 2);
    ComplexNumber resultAdd = zahidComplex + muqeetComplex;
    cout << "Zahid shows addition with Muqeet:" << endl;
    cout << "Result (3+4i) + (1+2i) = ";
    resultAdd.display();
    cout << endl;
    
    ComplexNumber saadComplex(8, 3);
    ComplexNumber azanComplex(5, 6);
    ComplexNumber resultSub = saadComplex - azanComplex;
    cout << "Saad demonstrates subtraction:" << endl;
    cout << "Result (8+3i) - (5+6i) = ";
    resultSub.display();
    cout << endl;
    
    ComplexNumber anotherZahid(2, 3);
    ComplexNumber anotherMuqeet(1, 4);
    ComplexNumber resultMul = anotherZahid * anotherMuqeet;
    cout << "Zahid calculates multiplication with Muqeet:" << endl;
    cout << "Result (2+3i) * (1+4i) = ";
    resultMul.display();
    cout << endl;
    
    ComplexNumber checkSaad(3, 5);
    ComplexNumber checkAzan(3, 5);
    cout << "Equality test by Zahid:" << endl;
    if(checkSaad == checkAzan)
    {
        cout << "Saad and Azan have identical complex numbers." << endl;
    }
    else
    {
        cout << "Saad and Azan's complex numbers differ." << endl;
    }
    return 0;
}
