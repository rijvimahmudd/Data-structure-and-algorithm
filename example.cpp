#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        cout << "continuous" << endl;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
};

int pivotIndex()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    int start = 0;
    int end = 6 - 1;
    int mid = start + (end - start) / 2;

    // while (start < end)
    // {

    //     cout << arr[mid] << " ";
    // }
    return 0;
}

int main()
{
    vector<int> original = {3, 4, 5, 1};

    // func("first");
    // int s = peakIndexInMountainArray(original);
    // cout << "peak index is " << s << endl;
    // pivotIndex();

    int maxi = 0;

    for (int i = 0; i < original.size(); i++)
    {

        maxi = max(maxi, original[i + 1]);
    }

    cout << maxi;
    return 0;
}