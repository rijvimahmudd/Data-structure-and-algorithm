#include <iostream>
#include <string.h>
using namespace std;

int firstBinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int findFirstOccurrencesWithBinarySearch(int arr[], int size, int key)
{
    // int odd[10] = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8};

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;

            end = mid - 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int findLastOccurrencesWithBinarySearch(int arr[], int size, int key, string position)
{
    // int odd[10] = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8};

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            if (position == "first")
            {
                end = mid - 1;
            }
            else if (position == "last")
            {
                start = mid + 1;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int findOccurrencesWithBinarySearch(int arr[], int size, int key, string position)
// int odd[10] = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8};
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int count = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "Mid calculation " << start << " + " << end << " / 2 = " << mid << endl;

        if (arr[mid] == key)
        {
            if (position == "first")
            {
                ans = mid;
                end = mid - 1;
            }
            else if (position == "last")
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int getPivot(int arr[], int size)
{
    //    int pivot[8] = {3, 8, 10, 17, 1,2,4,7};
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        cout << "Mid calculation " << start << " + " << end << " / 2 = " << mid << endl;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return end;
}

// get square root of n

long long int binarySearch(int n)
{
    int start = 0;
    int end = n;
    int ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;

        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

double PrecisionFactor(int n, int precision, int mainNumber)
{

    double factor = 1;
    double temp = mainNumber;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = temp; j * j < n; j = j + factor)
        {
            temp = j;
        }
    }
    return temp;
}

int main()
{

    int even[8] = {2, 4, 6, 6, 6, 6, 8, 10};
    int odd[10] = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8};
    int pivot[8] = {3, 8, 10, 17, 1, 2, 4, 7};
    // int evenIndex = firstBinarySearch(even, 8, 7);
    // cout << "even Index " << evenIndex << endl;
    // int oddIndex = firstBinarySearch(odd, 7, 6);
    // cout << "odd Index " << oddIndex << endl;
    // int firstOccur = findFirstOccurrencesWithBinarySearch(odd, 10, 3);
    // int lastOccur = findOccurrencesWithBinarySearch(odd, 10, 3, "last");
    // cout << "first occurrence of 3 is at index " << firstOccur << endl;
    // cout << "------------------------------" << endl;
    // cout << "second occurrence of 3 is at index " << lastOccur << endl;
    // cout << "second occurrence of 3 is at index " << findOccurrencesWithBinarySearch(odd, 10, 3, "last") << endl;

    // cout << "first binary search " << firstBinarySearch(even, 8, 8);
    // int Pivot = getPivot(pivot, 8);
    // cout << "Pivot is at Index " << Pivot << " " << endl;
    int n = 36;
    int tempSol = binarySearch(n);
    cout << "Square root of " << n << " is " << PrecisionFactor(n, 3, tempSol) << " " << endl;
    return 0;
}