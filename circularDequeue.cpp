#include <bits/stdc++.h>
using namespace std;

class Deque
{

    int *arr;
    int front, rear, size;

public:
    Deque(int k)
    {
        arr = new int[k];
        front = rear = -1;
        size = k;
    }

    bool push_front(int val)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = val;
        return true;
    }
    bool push_back(int val)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
        return true;
    }

    bool pop_front()
    {
        if (isEmpty()) // to check queue is empty
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        { // single element is present
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // to maintain cyclic nature
        }
        else
        {
            front++;
        }

        return ans;
    }
    bool pop_back()
    {
        if (isEmpty()) // to check queue is empty
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        { // single element is present
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1; // to maintain cyclic nature
        }
        else
        {
            rear--;
        }

        return ans;
    }

    int get_front()
    {
        if (isEmpty())
        {
            return -1;
        }

        return arr[front];
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }

        return false;
    }
    // this function and logic is correct for LL implementation
    bool isFull()
    {
        if (front == 0 && rear == size - 1 || rear == (front - 1) % (size - 1))
        {
            return true;
        }

        return false;
    }
    // this function and logic is correct for array implementation
    // bool isFull()
    // {
    //     if ((rear + 1) % size == front)
    //     {
    //         return true;
    //     }

    //     return false;
    // }
};

int main(int argc, char const *argv[])
{
    Deque *dq = new Deque(5);

    dq->push_front(1);
    dq->push_front(2);
    dq->push_back(3);
    dq->push_front(4);
    dq->push_front(5);
    dq->push_front(6);

    cout << dq->get_front() << endl;
    cout << dq->getRear() << endl;
    return 0;
}
