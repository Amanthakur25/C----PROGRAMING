#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // dsetructor
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "the memory is free for " << value << endl;
    }
};
void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)

    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    if(tail==NULL)
    {
        cout<<"linklist is empty";cout<<endl;
        return;
    }
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "linklist is empty";
    }
    Node *prev = tail;
    Node *curr = prev->next;
    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    prev ->next= curr->next;
     if(curr==prev)
    {
        tail=NULL;
    }
    if(tail==curr)
    {
        tail=prev;
    }
   
    curr->next = NULL;
    delete curr;
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 500);
    print(tail);

    cout<<endl;
    deleteNode(tail,500);
    print(tail);
    return 0;
}