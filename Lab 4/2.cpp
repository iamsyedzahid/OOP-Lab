#include <iostream>

using namespace std;

class WeekDays {
    string days[7];
    int CurrentDay;

    public:
    WeekDays()
    {
        days[0] = "Monday";
        days[1] = "Tuesday";
        days[2] = "Wednesday";
        days[3] = "Thursday";
        days[4] = "Friday";
        days[5] = "Saturday";
        days[6] = "Sunday";
    }
    WeekDays(int Cday)
    {
        days[0] = "Monday";
        days[1] = "Tuesday";
        days[2] = "Wednesday";
        days[3] = "Thursday";
        days[4] = "Friday";
        days[5] = "Saturday";
        days[6] = "Sunday";

        this->CurrentDay = (Cday%7)-1;
    }
    void getCurrentDay()
    {
        cout<<"Today is "<<this->days[CurrentDay]<<endl;
    }
    void getNextDay()
    {
        cout<<"Tomorrow is "<<this->days[(CurrentDay+1)%7]<<endl;
    }
    void getPreviousDay()
    {
        if(days[CurrentDay]=="Monday")
        {
            cout<<"Yesterday was "<<this->days[6]<<endl;    
        }
        cout<<"Yesterday was "<<this->days[(CurrentDay-1)]<<endl;
    }
    void getNthDayFromToday(int n)
    {
        cout<<"Nth day is "<<this->days[(CurrentDay+n)%7]<<endl;
    }
};

int main()
{
    WeekDays w1();
    WeekDays w2(2);
    w2.getCurrentDay();
    w2.getNextDay();
    w2.getPreviousDay();
    w2.getNthDayFromToday(8);
    return 0;
}
