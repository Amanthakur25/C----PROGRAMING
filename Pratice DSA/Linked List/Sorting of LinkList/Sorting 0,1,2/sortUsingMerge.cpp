#include <iostream>
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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertathead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next= head;
    head = temp;
}
void insertattail(Node *&tail, int value)
{
    Node *temp = new Node(value);
   tail->next=temp;
    tail = temp;
}
void print(Node *head)
{
    while (head!= NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
  
}
Node* sortlist(Node*head)
{
    Node*zerohead=new Node(-1);
    Node*onehead=zerohead;
}
int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    insertathead(head, 2);
    insertattail(tail, 0);
    insertattail(tail, 2);
    insertattail(tail, 1);
    sortlist(head);
    print(head);
    return 0;
}