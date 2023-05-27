#include <iostream>
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
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}
void insertAtMiddle(Node *&tail, Node *&head, int position, int value)
{
    if (position == 1)
    {
        insertAtHead(head, value);
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
        insertAtTail(tail, value);
        return;
    }

    Node *nodeToInsert = new Node(value);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deletenode(int position, Node *&head) // for deletion of node
{
    // for deleting the head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void disply(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    disply(head);

    cout << endl;
    cout << endl;

    insertAtMiddle(tail, head, 4, 99);
    disply(head);
    cout << endl;
    cout << endl;

    deletenode(3, head);

    disply(head);

    cout << endl;

    return 0;
}
