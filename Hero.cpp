#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // properties
public:
    char level;

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h, char name)
    {
        if (name == 'a')
        {
            health = h;
        }
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    // constructor
    Hero()
    {
        cout << "constructor called" << endl;
    }

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

private:
    int health;

    char name[100];

    // void print()
    // {
    //     cout << name << endl;
    // }

protected:
};