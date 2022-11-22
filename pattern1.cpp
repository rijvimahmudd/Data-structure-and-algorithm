#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value:";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            /**
             * pattern
             * 123
             * 123
             * 123
             *
             *
             * this is for reverse pattern
             * cout << n - j + 1 << " ";
             *
             * this is for simple pattern
             * cout << j << " ";
             */
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}