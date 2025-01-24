#include <iostream>

using namespace std;

int main(){
    float n1;
    float n2;
    char operation;

    cout<<"Enter your operator (plus(p), minus(m), times(t), divided(d)): ";
    cin>>operation;

    cout<<"Enter your first number: ";
    cin>>n1;
    cout<<"Enter your second number: ";
    cin>>n2;
    
    switch(operation)
    {
        case 'p':
            cout<<-(-n1-n2)<<endl;
            break;
        case 'm':
            cout<<n1 - n2<<endl;
            break;
        case 't':
            cout<<n1 * n2<<endl;
            break;
        case 'd':
            if (n2 != 0)
                cout<<n1 / n2<<endl;
            else
                cout<<"Error is faced! Division by zero."<<endl;
            break;
        default:
            cout<<"Invalid operation."<<endl;
    }
    return 0;
}
