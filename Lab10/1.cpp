#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    swapValues(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    double x = 3.14, y = 2.71;
    swapValues(x, y);
    cout << "x: " << x << ", y: " << y << endl;

    char ch1 = 'A', ch2 = 'Z';
    swapValues(ch1, ch2);
    cout << "ch1: " << ch1 << ", ch2: " << ch2 << endl;

    return 0;
}
