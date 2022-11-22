#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

void print(Node *tail)
{
    Node *prev = tail;
    // cout << tail->data << " ";
    // tail = tail->next;
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != prev);

    // while (tail != prev)
    // {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    cout << endl;
}

int getLen(Node *head)
{
    int len = 0;
    Node *prev = head;
    while (prev != NULL)
    {
        len++;
        prev = prev->next;
    }
    return len;
}

void insertNode(Node *&tail, int element, int d)
{

    // assuming that the element present in the list

    // empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non-empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found

        Node *temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(int value, Node *&tail)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty
        // assuming that value is present in the linked list

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // single node linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;

        delete curr;
    }
}

bool isCircularList(Node *head)
{

    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main(int argc, char const *argv[])
{
    Node *tail = NULL;

    // while insert at empty list element doesn't matter
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    insertNode(tail, 4, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 7, 8);
    print(tail);

    deleteNode(3, tail);
    print(tail);

    if (isCircularList(tail))
    {
        cout << "linked list is circular in nature " << endl;
    }
    else
    {
        cout << "linked list is not circular" << endl;
    }

    return 0;
}
