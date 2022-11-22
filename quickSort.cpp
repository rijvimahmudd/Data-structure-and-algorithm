#include <bits/stdc++.h>

using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{

    cout << "partitioned array " << endl;

    int pivot = arr[s];
    print(arr, s, e);
    cout << endl;
    int count = 0;
    cout << "pivot " << pivot << endl;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            cout << " s " << i << " e "
                 << j << endl
                 << endl;
            cout << "arr[i] " << arr[i] << " arr[j] " << arr[j] << endl;

            cout << "if block " << endl;
            print(arr, i, j);

            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case

    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    cout << "p " << p << endl;

    // left part sort
    quickSort(arr, s, p - 1);

    // right part sort
    quickSort(arr, p + 1, e);
}

int main(int argc, char const *argv[])
{
    int arr[10] = {12, 26, 78, 65, 66, 3, 6, 4, 222, 555};
    int n = 10;
    quickSort(arr, 0, n - 1);
    print(arr, 0, n - 1);

    return 0;
}
