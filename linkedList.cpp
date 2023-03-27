#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

// insertion

void insertAtHead(Node *&head, int d)
{

    // create new node

    Node *prev = new Node(d);

    prev->next = head;
    head = prev;
}
void insertAtTail(Node *&tail, int d)
{

    // create new node

    Node *prev = new Node(d);

    tail->next = prev;
    tail = tail->next;
}

void insertAtPosition(int position, int d, Node *&head, Node *&tail)
{
    Node *temp = head;
    int count = 1;
    // insert at first
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
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
    temp->next = node;
}

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

void deleteNode(int position, Node *&head)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

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

        prev->next = curr->next;
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

Node *reverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chotiHead = reverse(head->next);

    head->next->next = head;
    int data = head->next->next->data;
    head->next = NULL;
    // data = head->next->data;

    return chotiHead;
}

int main(int argc, char const *argv[])
{
    // create a new node
    Node *n = new Node(10);
    // cout << n->data << endl;
    // cout << n->next << endl;
    // head pointed to node 1

    Node *head = n;
    Node *tail = n;

    insertAtTail(tail, 12);

    // print(head);

    insertAtTail(tail, 15);

    // print(head);
    insertAtPosition(4, 22, head, tail);

    // print(head);

    Node *temp = reverse(head);

    print(temp);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    // deleteNode(3, head);
    // print(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    // if (isCircularList(head))
    // {
    //     cout << "linked list is circular in nature " << endl;
    // }
    // else
    // {
    //     cout << "linked list is not circular" << endl;
    // }

    return 0;
}
