#include <bits/stdc++.h>
using namespace std;

class circularQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    circularQueue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    };

    bool enqueue(int val)
    {
        // checking for queue is full or not
        if (front == 0 && rear == size - 1 && rear == (front - 1) % (size - 1) /*this condition always cyclic check rear == front - 1*/)
        {
            cout << "queue is full" << endl;
            return false;
        }
        else if (front == -1) // first element to push
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0; // to maintain cyclic nature
        }
        else
        {
            // normal flow
            rear++;
        }

        // pushing to queue
        arr[rear] = val;
        return true;
    }

    int dequeue()
    {
        if (front == -1) // to check queue is empty
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

    ~circularQueue()
    {
        cout << "Destructor called: [ ";
        while (front != -1)
        {
            cout << arr[front] << " ";
            dequeue();
        }
        cout << "]" << endl;
        delete[] arr;
    };
};

int main(int argc, char const *argv[])
{
    circularQueue *cq = new circularQueue(5);
    cq->enqueue(1);
    cq->enqueue(2);
    cq->enqueue(3);
    cq->enqueue(4);
    cq->enqueue(5);

    cout << "popped data " << cq->dequeue() << endl;
    cout << "popped data " << cq->dequeue() << endl;
    cout << "popped data " << cq->dequeue() << endl;
    cout << "popped data " << cq->dequeue() << endl;
    cout << "popped data " << cq->dequeue() << endl;

    delete cq;

    return 0;
}
