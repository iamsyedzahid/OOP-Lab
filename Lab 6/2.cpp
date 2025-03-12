#include <iostream>
using namespace std;

class Character
{
protected:
    string name;
    int health;
    int damage;

public:
    Character(string n, int h, int d)
    {
        name = n;
        health = h;
        damage = d;
    }

    void displayC() const
    {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};

class Player : public Character
{
    int level;
    string PlayerType; // ya tou Hero ya phir Looter

public:
    Player(string n, int h, int d, int lvl, string type) : Character(n, h, d)
    {
        level = lvl;
        PlayerType = type;
    }

    void displayP() const
    {
        displayC();
        cout << "Level: " << level << endl;
        cout << "Player Type: " << PlayerType << endl;
    }
};

class Enemy : public Character
{
    int difficultyLvl;

public:
    Enemy(string n, int h, int d, int Dlvl) : Character(n, h, d)
    {
        difficultyLvl = Dlvl;
    }

    void displayE() const
    {
        displayC();
        cout << "Difficulty Level: " << difficultyLvl << endl;
    }
};

class Wizard : public Player
{
    int MagicPower;
    string Spell;

public:
    Wizard(string n, int h, int d, int lvl, string type, int mp, string s)
        : Player(n, h, d, lvl, type)
    {
        MagicPower = mp;
        Spell = s;
    }

    void displayW() const
    {
        displayP();
        cout << "Magic Power: " << MagicPower << endl;
        cout << "Spell: " << Spell << endl;
    }
};

int main()
{
    Player p1("Zahid", 100, 10, 5, "Treasure Hunter");
    Enemy e1("Minion", 50, 20, 3);
    Wizard w1("Sung Jinwoo", 120, 35, 10, "Mage", 80, "Summoning");

    cout << "\nPlayer Details\n"<<endl;
    p1.displayP();

    cout << "\nEnemy Details\n"<<endl;
    e1.displayE();

    cout << "\nWizard Details\n"<<endl;
    w1.displayW();

    return 0;
}
