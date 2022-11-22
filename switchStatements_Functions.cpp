#include <iostream>

using namespace std;

int miniCalculator()
{
    int a, b;

    cout << "enter the value of a ";
    cin >> a;

    cout << "enter the value of b ";
    cin >> b;

    char op;
    cout << "enter the value of operation ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "enter a valid operation";
        break;
    }
    return 0;
}

int NoteCounter()
{
    int amount;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Taka =" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Taka =" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Taka =" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Taka =" << Rs1 << endl;
    }
    return 0;
}

int power()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool isEven()
{
    int num;
    cin >> num;

    if (num & 1)
    {
        return 0;
    }

    return 1;
}

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void arithmeticProgression()
{
    int n;
    cout << "enter the value on n: " << endl;
    cin >> n;

    cout << (3 * n + 7) << endl;
}

int TotalSetBits(int a)
{

    int count = 0;
    while (a)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }

    return count;
}

int fib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
    return 0;
}

int main()
{
    // miniCalculator();
    // NoteCounter();
    // int ans = power();
    // cout << "your answer is " << ans << endl;
    // if (isEven())
    // {
    //     cout << "It's a even number" << endl;
    // }
    // else
    // {
    //     cout << "It's a odd number" << endl;
    // }

    // int n, r;
    // cin >> n >> r;

    // int ncr = nCr(n, r);

    // cout << "nCr is " << ncr << endl;

    // int n;
    // cout << "enter the value of n ";
    // cin >> n;
    // if (isPrime(n))
    // {
    //     cout << n << " is a prime number." << endl;
    // }
    // else
    // {
    //     cout << n << " is not a prime number." << endl;
    // }

    // arithmeticProgression();
    // int a, b;
    // cout << "enter the value for setbits" << endl;
    // cin >> a >> b;
    // int setBitsA = TotalSetBits(a);
    // int setBitsB = TotalSetBits(b);

    // cout << a << "'s set bit is"
    //      << " " << setBitsA << " "
    //      << "\n"
    //      << b << "'s set bit is"
    //      << " " << setBitsB << endl;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fib(n);
    return 0;
}