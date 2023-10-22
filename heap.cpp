#include <bits/stdc++.h>
using namespace std;

class heap
{
    int arr[100];
    int size;

public:
    heap()
    {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        // find the parent
        while (index > 1)
        {
            int parentIdx = index / 2;
            if (arr[parentIdx] < arr[index])
            {
                swap(arr[parentIdx], arr[index]);
                index = parentIdx;
            }
            else
            {
                return;
            }
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "nothing to delete " << endl;
            return;
        }

        // step1: put last element into first index
        arr[1] = arr[size];

        // step2: remove last element
        size--;

        // step3: take root node to it's correct position
        int i = 1;

        while (i < size)
        {
            int leftIdx = 2 * i;
            int rightIdx = 2 * i + 1;

            if (leftIdx < size && arr[i] < arr[leftIdx])
            {
                swap(arr[i], arr[leftIdx]);
                i = leftIdx;
            }
            else if (rightIdx < size && arr[i] < arr[rightIdx])
            {
                swap(arr[i], arr[rightIdx]);
                i = rightIdx;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        // step1: swap
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.Delete();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // heap creation
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "printing the array now" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);
    cout << "printing the array now" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
