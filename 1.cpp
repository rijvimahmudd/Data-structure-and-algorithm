#include <iostream>
using namespace std;

// int primeornot(int input)
// {
//     int i = 2;
//     while (i < input)
//     {
//         if (i % input == 0)
//         {
//             /* code */
//             cout << "hello" << endl;
//         }

//         i++;
//     }
//     return 0;
// }

int main()
{

    char a = 'v';
    cout << a << endl;

    bool bl = false;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.234;
    cout << d << endl;

    int size = sizeof(a);
    cout << "size of a is : " << size << endl;
    int size1 = sizeof(bl);
    cout << "size of a is : " << size1 << endl;
    int size2 = sizeof(f);
    cout << "size of a is : " << size2 << endl;
    int size3 = sizeof(d);
    cout << "size of a is : " << size3 << endl;

    char c = 'cd';
    cout << c << endl;
    int e = 'c';
    cout << e << endl;

    char be = 98;
    cout << be << endl;
}