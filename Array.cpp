#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    };
}

void swapAlternateWithoutSwapFunction(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            temp = arr[i];

            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        // cout << temp;
    };
}

int main()
{
    int even[8] = {4, 5, 8, 2, 6, 6, 1, 0};
    int odd[7] = {4, 5, -2, 6, 7, 4, 0};
    swapAlternateWithoutSwapFunction(even, 8);
    printArray(even, 8);
    swapAlternateWithoutSwapFunction(odd, 7);
    printArray(odd, 7);
    // swapAlternate(odd, 7);
    // printArray(odd, 7);
    return 0;
}
