#include <iostream>
using namespace std;

int BitwiseOperator()
{
    int a = 4;
    int b = 6;

    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << " ~b: " << (~b) << endl;
    cout << "a^b: " << (a ^ b) << endl;
    cout << "a>>1: " << (a >> 1) << endl;
    cout << "a<<2: " << (a << 2) << endl;
    return 0;
}

int ForLoop(int n)
{

    int i = 0;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        };
        i++;
    };

    return 0;
}

int DoubleVariableForLoop(int n)
{

    for (int i = 0, j = 0; i <= n && j <= n; i++, j++)
    {
        cout << i << " " << j << endl;
    };
    return 0;
}

int Sum(int n)
{

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
};

int FibonacciSeries(int n)
{

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

    return 0;
}

int PrimeOrNot(int n)
{
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "yes, It's prime number" << endl;
    }
    return 0;
}

int ContinueLoop(int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;
        cout << "Reply please" << endl;
    }

    return 0;
}

int main()
{
    int n;
    cout << "enter the value of n:- " << endl;
    cin >> n;
    // BitwiseOperator();
    // ForLoop(n);
    // DoubleVariableForLoop(n);
    // Sum(n);
    // FibonacciSeries(n);
    // PrimeOrNot(n);
    ContinueLoop(n);
    return 0;
}
