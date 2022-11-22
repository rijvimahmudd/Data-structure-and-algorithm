#include <bits/stdc++.h>
#include "Hero.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
     // static allocation
     Hero a(100);
     cout << "level " << a.level << endl;
     cout << "health " << a.getHealth() << endl;

     // dynamic allocation

     Hero *h = new Hero(90);
     h->setLevel('a');
     cout << "level " << (*h).level << endl;
     cout << "health " << h->getHealth() << endl;
     cout << "address " << h << endl;
     cout << "address " << &h << endl;

     //     Hero h1;
     //     cout << "health is " << h1.getHealth() << endl;
     //     // h1.health = 17;
     //     h1.setHealth(70, 'a');
     //     h1.level = 'a';
     //     cout << sizeof(h1) << " " << endl;
     //     cout << "Health is"
     //          << " " << h1.getHealth() << endl;
     //     cout << "level is"
     //          << " " << h1.level << endl;
     return 0;
}
