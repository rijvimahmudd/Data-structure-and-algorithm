#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            };
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col)
{
    int rowIndex = 0;
    int maxi = INT_MIN;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << endl;
    return rowIndex;
}

int main(int argc, char const *argv[])
{
    int arr[3][4];
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    // 1 2 3 4 5 6 7 8 9 10 11 12
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << "sum the element is " << endl;
    printSum(arr, 3, 4);

    int rowIndex = largestRowSum(arr, 3, 4);
    cout << "largest row sum index is " << rowIndex << endl;

    return 0;
}
