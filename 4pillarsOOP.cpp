#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }

    int setAge(int age)
    {
        return this->age = age;
    }
};

class Human
{
public:
    int height;
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    int setWeight(int w)
    {
        return this->weight = w;
    }
};

class Male : protected Human
{
public:
    string color;

    void sleep()
    {

        cout << "Male sleeping" << endl;
    }

    int getHeight()
    {

        return this->height = 5;
    }
};

int main(int argc, char const *argv[])
{

    // Student first;
    // first.setAge(70);
    // cout << first.getAge();

    Male obj1;
    // cout << obj1.age << endl;
    // cout << obj1.weight << endl;
    // cout << obj1.height << endl;
    cout << obj1.color << endl;
    obj1.sleep();
    cout << obj1.getHeight() << endl;
    // obj1.setWeight(84);
    // cout << obj1.weight << endl;

    return 0;
}
