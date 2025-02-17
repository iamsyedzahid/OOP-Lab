#include <iostream>
using namespace std;

class CricketPlayer {
public:
    string name;
    int jerseyNumber;
    int battingAverage;

    CricketPlayer(string name, int jerseyNumber, int battingAverage)
    {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }

    void improveAverage(int runs)
    {
        battingAverage = (battingAverage + runs) / 2;
    }

    void playMatch(int runsScored)
    {
        battingAverage = (battingAverage + runsScored) / 2;
    }

    void displayPlayerStats()
    {
        cout << "Player: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;
        if (battingAverage>=40)
        {
            cout << "This batting average is more consistent than Karachi\’s weather!" << endl<<endl;
        }
        if (battingAverage>0 && battingAverage<40)
        {
            cout << "This batting average is so impresssive that even Misbah ul Haq is shocked. ;)" << endl<<endl;
        }
        if (battingAverage < 0)
        {
            cout << "Negative Average Entered!" << endl<<endl;
        }
    }
};

int main()
{
    CricketPlayer player1("Babar Azam", 56, 60);
    CricketPlayer player2("Muhammad Rizwan", 18, 39);
    CricketPlayer player3("Saim Ayub", 7, 25);

    player1.displayPlayerStats();
    player2.displayPlayerStats();
    player3.displayPlayerStats();

    player1.playMatch(100);
    player1.improveAverage(110);
    player1.improveAverage(120);
    player1.displayPlayerStats();

    player2.playMatch(30);
    player2.improveAverage(50);
    player2.improveAverage(60);
    player2.displayPlayerStats();

    player3.playMatch(80);
    player3.improveAverage(90);
    player3.improveAverage(95);
    player3.displayPlayerStats();

    return 0;
}
