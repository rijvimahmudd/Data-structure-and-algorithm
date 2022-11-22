// note

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int Sum(int *arr, int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int remainingPart = Sum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

bool linearSearch(int *arr, int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

bool binarySearch(int arr[], int s, int e, int k)
{
    int mid = s + (e - s) / 2;

    if (s > e)
    {
        return 0;
    }

    if (arr[mid] == k)
    {
        return 1;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

void reverse(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(str[i++], str[j--]);

    reverse(str, i, j);
}

bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int power(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }

    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

void bubbleSortArray(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSortArray(arr, n - 1);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {9, 4, 16, 8, 12};

    int n = 5;

    bubbleSortArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    // int a = 3, b = 11;
    // int ans = power(a, b);

    // cout << "answer is " << ans << endl;

    // string name = "nun";

    // reverse(name, 0, name.length() - 1);

    // bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    // if (isPalindrome)
    // {
    //     cout << "true" << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }

    // int arr[6] = {2, 4, 6, 8, 9, 27};
    // int size = 6;

    // bool ans = isSorted(arr, size);

    // if (ans)
    // {
    //     cout << "array is sorted";
    // }
    // else
    // {
    //     cout << "array is not sorted";
    // }
    // int ans = Sum(arr, size);

    // cout << ans << endl;

    // bool ans = linearSearch(arr, size, 4);
    // if (ans)
    // {
    //     cout << "found";
    // }
    // else
    // {
    //     cout << "not found";
    // }

    // bool ans = binarySearch(arr, 0, size, 9);
    // if (ans)
    // {
    //     cout << "found";
    // }
    // else
    // {
    //     cout << "not found";
    // }

    return 0;
}
