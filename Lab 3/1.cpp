#include <iostream>
using namespace std;

class BoardMarker {
    string company;
    string color;
    bool refillable;
    bool inkStatus;
    
public:
    void setValues(string cmpany, string clor, bool refill, bool status){
        company=cmpany;
        color=clor;
        refillable=refill;
        inkStatus=status;
    }
    string getCompany(){
        return company;
    }
    string getcolor(){
        return color;
    }
    bool isRefillable(){
        return refillable;
    }
    bool Ink(){
        return inkStatus;
    }

    void write()
    {
        if(inkStatus==false)
        {
            cout << "Writing is not possible."<< endl;
        }
        else
        {
            cout << "Proceed with writing!"<< endl;
        }

    }
    void refill()
    {
        if(refillable)
        {
            cout<<company<<" Ink refilled."<<endl;
            inkStatus= true;
        }
        else
        {
            cout<<"Ink cannot be refilled."<<endl;
        }
    }
};

int main()
{
    BoardMarker Dollar;
    BoardMarker Fineliner;
    BoardMarker Muqeet;

    Dollar.setValues("dollar","red",true,false);
    Fineliner.setValues("fineliner","black",true,true);
    Muqeet.setValues("muqeet","blue",false,false);
    
    Dollar.write();
    Dollar.refill();
    Muqeet.write();
    Muqeet.refill();
    Fineliner.write();
    Fineliner.refill();
    
    return 0;
}
