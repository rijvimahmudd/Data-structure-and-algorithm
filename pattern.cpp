#include <iostream>
using namespace std;

/**
 * for print
 * 1
 * 22
 * 333
 */
int triangle()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {
            // cout << row;
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}

/**
 * pattern
 * 1
 * 23
 * 456
 * 78910
 * 1112131415
 * 161718192021
 */
int triangle1()
{
    int n;
    cin >> n;

    int row = 1;
    int count = 1;

    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * 1
 * 23
 * 345
 * 4567
 * 56789
 * 67891011
 */
int triangle2()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)

    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value;
            // cout << row + col - 1;

            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * 1
 * 21
 * 321
 * 4321
 * 54321
 * 654321
 */
int triangle3()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {

            cout << ((row - col) + 1);

            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * AAAA
 * BBBB
 * CCCC
 * DDDD
 */
int roundAB()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * ABCD
 * ABCD
 * ABCD
 * ABCD
 */
int roundAB1()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 *ABCD
 *EFGH
 *IJKL
 *MNOP
 */
int roundAB2()
{
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch;
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * ABCDE
 * BCDEF
 * CDEFG
 * DEFGH
 * EFGHI
 */
int roundAB3()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // row + col - 1 - 'A' - 1
            char ch = 'A' + row + col - 2;
            cout << ch;
            col++;

            /* code */
        }
        cout << endl;
        row++;

        /* code */
    }
    return 0;
}

/**
 * pattern
 * A
 * BB
 * CCC
 * DDDD
 * EEEEE
 */
int triangle4()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {
            char ch = ('A' + (row - 1));
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * A
 * BC
 * DEF
 * GHIJ
 * KLMNO
 */
int triangle5()
{
    int n;
    cin >> n;

    int row = 1;
    char value = 'A';
    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {

            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * A
 * BC
 * CDE
 * DEFG
 */
int triangle6()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)

    {
        int col = 1;
        while (col <= row)
        {
            char ch = ('A' + (col + (row - 2)));
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
 * E
 * DE
 * CDE
 * BCDE
 * ABCDE
 */
int triangle7()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)

    {
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)
        {
            cout << start;
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 * pattern
    "   *
       **
      ***
     ****
    *****    "
*/
int triangle8()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        // print space
        int space = (n - row);
        while (space)
        {
            cout << ' ';
            space--;
        }
        // print stars
        int col = 1;
        while (col <= row)
        {
            cout << '*';
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/**
 pattern
 ******
 *****
 ****
 ***
 **
 *
 */
int triangle9()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = ((n - row) + 1);
        while (col <= start)
        {
            cout << '*';
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

// pattern
// *****
//  ****
//   ***
//    **
//     *
int triangle10()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        int star = n - row + 1;
        while (col <= star)
        {
            cout << '*';
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

// pattern
//     1
//    121
//   12321
//  1234321
// 123454321
int complexTriangle()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        // first triangle(space triangle / hidden triangle)
        int space = n - row;

        while (space)
        {
            cout << ' ';
            space--;
        };

        // second triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        };

        // third triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        };

        row++;
        cout << endl;
    }
    return 0;
}

int main()
{
    complexTriangle();
    return 0;
}