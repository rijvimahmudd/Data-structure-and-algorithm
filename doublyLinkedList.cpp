#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;

    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

void print(Node *&head)
{
    Node *prev = head;
    while (prev != NULL)
    {
        cout << prev->data << " ";
        prev = prev->next;
    }
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

void insertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    // insert at first
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // creating a node for d

    Node *node = new Node(d);

    node->next = temp->next;
    temp->next->prev = node;
    temp->next = node;
    node->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(int argc, char const *argv[])
{
    // Node *doubly = new Node(10);
    // Node *head = doubly;
    // Node *tail = doubly;
    Node *head = NULL;
    Node *tail = NULL;
    print(head);

    insertAtHead(tail, head, 11);
    print(head);
    insertAtHead(tail, head, 12);
    print(head);
    insertAtHead(tail, head, 13);
    print(head);
    cout << "length is " << getLen(head) << endl;
    insertAtTail(tail, head, 7);
    print(head);
    insertAtTail(tail, head, 8);
    print(head);
    insertAtTail(tail, head, 9);
    print(head);
    cout << "length is " << getLen(head) << endl;
    insertAtPosition(tail, head, 2, 100);
    print(head);
    insertAtPosition(tail, head, 1, 101);
    print(head);
    cout << "length is " << getLen(head) << endl;

    // deleteNode(1, head);
    // print(head);

    // cout << "length is " << getLen(head) << endl;
    deleteNode(8, head);
    print(head);

    cout << "length is " << getLen(head) << endl;

    insertAtPosition(tail, head, 1, 104);
    print(head);
    cout << "length is " << getLen(head) << endl;

    return 0;
}
