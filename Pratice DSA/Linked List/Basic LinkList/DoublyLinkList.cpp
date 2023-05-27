#include <iostream>
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
        cout << "menory free for node with data" << value;
    }
};
void print(Node *haed)
{
    Node *temp = haed;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int getlen(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAthead(Node *&tail, Node *&head, int value)
{
    if (head == NULL)
    {
        Node *temp = new Node(value);
        head = temp;
        tail = temp;
    }
    Node *temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, Node *&head, int value)
{
    if (tail == NULL)
    {
        Node *temp = new Node(value);
        tail = temp;
        head = temp;
    }
    Node *temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMiddle(Node *&tail, Node *&head, int position, int value)
{
    if (position == 1)
    {
        insertAthead(tail, head, value);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, value);
        return;
    }
    Node *nodetoinsert = new Node(value);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

    return;
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = head;

    cout << endl;

    insertAthead(tail, head, 100);

    insertAtTail(tail, head, 500);
    print(head);

    insertAtMiddle(tail, head, 3, 99);
    cout << endl;
    cout << endl;
    print(head);
    cout << endl;
    deleteNode(3, head);
    cout << endl;
    print(head);
    return 0;
}
