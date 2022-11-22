#include <iostream>
#include <math.h>
using namespace std;

int DecimalToBinary(int n)
{
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "answer is " << ans << endl;

    return 0;
}

int NegativeDecimalToBinary(int n)
{
    int i = 0, ans = 0;

    n = abs(n);

    n = n ^ (-1); // 1s compliment representation
    n = n + 1;    // 2s compliment representation
    int a = 9;
    while (a >= 0)
    {

        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
        a--;
    }
    cout << "Answer is " << ans << endl;

    return 0;
}

int BinaryToDecimal(int n)
{
    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << ans;
    return 0;
};

int main()
{
    int n;
    cout << "please enter the value of n: ";
    cin >> n;
    // DecimalToBinary(n);
    // NegativeDecimalToBinary(n);
    BinaryToDecimal(n);
    return 0;
}