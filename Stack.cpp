#include <bits/stdc++.h>
// #include <stack>

using namespace std;

class Stack
{
    // properties
public:
    int size;
    int *arr;
    int top;

    // behavior's
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }
    bool isEmpty()
    {

        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // stack create with STL

    // stack<int> s;
    // s.push(3);
    // s.push(4);
    // s.push(4);

    // s.pop();

    // cout << "printing top element is " << s.top() << endl;

    // if (s.empty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "Stack has some data" << endl;
    // }

    // cout << "size of stack is " << s.size() << endl;
    Stack st(7);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << "peak of these stack is " << st.peak() << endl;

    st.pop();
    cout << "after pop " << st.peak() << endl;
    st.pop();
    cout << "after pop " << st.peak() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
        cout << "Stack is not empty" << endl;
    }
    return 0;
}