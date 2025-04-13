#include <iostream>
using namespace std;

class BallsFaced
{
private:
    int balls;
public:
    BallsFaced(int b) : balls(b)
    {
    }
    friend double calculateStrikeRate(const class Runs &r, const BallsFaced &b);
};

class Runs
{
private:
    int runs;
public:
    Runs(int r) : runs(r)
    {
    }
    friend double calculateStrikeRate(const Runs &r, const BallsFaced &b);
};

double calculateStrikeRate(const Runs &r, const BallsFaced &b)
{
    if(b.balls == 0)
    {
        cerr << "Error: Balls Faced cannot be zero." << endl;
        return 0;
    }
    return (static_cast<double>(r.runs) / b.balls) * 100;
}

int main()
{
    Runs muqeetRuns(85);
    BallsFaced saadBalls(60);
    double strikeRate = calculateStrikeRate(muqeetRuns, saadBalls);
    cout << "Zahid's analysis:" << endl;
    cout << "With Muqeet scoring 85 runs and Saad facing 60 balls," << endl;
    cout << "the strike rate is: " << strikeRate << endl;
    return 0;
}
