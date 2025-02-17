#include <iostream>
using namespace std;

class FootballPlayer {
public:
    string playerName;
    string position;
    int goalCount;

    FootballPlayer()
    {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string playerName, string position, int goalCount)
    {
        this->playerName = playerName;
        this->position = position;
        this->goalCount = goalCount;
    }

    FootballPlayer(string playerName)
    {
        this->playerName = playerName;
        position = "Midfielder";
        goalCount = 10;
    }

    FootballPlayer(const FootballPlayer &other)
    {
        playerName = other.playerName;
        position = other.position;
        goalCount = other.goalCount;
    }

    void boostGoals(int goals)
    {
        goalCount += goals;
    }

    void displayProfile()
    {
        cout << "Player: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goal Count: " << goalCount << endl<<endl;
    }
};

int main()
{
    FootballPlayer player1;
    FootballPlayer player2("Cristiano Ronaldo", "Forward", 50);
    FootballPlayer player3("Lionel Messi");
    FootballPlayer player4(player2);

    player1.displayProfile();
    player2.displayProfile();
    player3.displayProfile();
    player4.displayProfile();

    player2.boostGoals(10);
    player3.boostGoals(5);

    player2.displayProfile();
    player3.displayProfile();

    return 0;
}
