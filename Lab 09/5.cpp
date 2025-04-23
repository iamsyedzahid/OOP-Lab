#include <iostream>
using namespace std;

class Activity 
{
public:
    virtual double calculateCaloriesBurned() = 0;
    virtual ~Activity() {}
};

class Running : public Activity 
{
private:
    double distance;
    double time;

public:
    Running(double d, double t) 
    {
        distance = d;
        time = t;
    }

    double calculateCaloriesBurned() override
    {
        return distance * 60;
    }
};

class Cycling : public Activity 
{
private:
    double speed;
    double time;

public:
    Cycling(double s, double t) 
    {
        speed = s;
        time = t;
    }

    double calculateCaloriesBurned() override
    {
        return speed * time * 30;
    }
};

int main() 
{
    Running zahidRun(5.0, 30.0);
    Cycling ahadCycle(20.0, 1.0);

    Activity* activity;

    activity = &zahidRun;
    cout << "Zahid's Running Calories Burned: " << activity->calculateCaloriesBurned() << " kcal" << endl;

    activity = &ahadCycle;
    cout << "Ahad's Cycling Calories Burned: " << activity->calculateCaloriesBurned() << " kcal" << endl;

    return 0;
}
