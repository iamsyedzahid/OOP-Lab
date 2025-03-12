#include <iostream>
using namespace std;

class Position
{
    int x;
    int y;
    int z;
    public:
    Position(int x, int y,int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void displayP() const
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
    }
};
class Health
{
    int health;
    public:
    Health(int h = 100) : health(h) {}
    void displayH() const
    {
        cout<<"Health is "<<health<<endl;
    }
    void damageTaken(int damage)
    {
        health -= damage;
        if (health < 0)
        {
            health = 0;
            cout<<"Player Died"<<endl;
        }
    }
};

class Character : public Position, public Health
{
    string name;
    public:
    Character(int x, int y, int z, int h, string name) : Position(x,y,z), Health(h)
    {
        this->name = name;
    }
    void displayC() const
    {
        cout<< "Character Name is "<<name<<endl;
        displayP();
        displayH();
    }
};

int main()
{
    Character Saad(0, 0, 27, 1000, "Saad-Ullah");

    cout << "\nCharacter Details:\n";
    Saad.displayC();

    cout << "\nCharacter Takes Damage:\n";
    Saad.damageTaken(30);
    Saad.displayH();

    cout << "\nCharacter Takes Fatal Damage\n";
    Saad.damageTaken(8000);
    Saad.displayH();

    return 0;
}
