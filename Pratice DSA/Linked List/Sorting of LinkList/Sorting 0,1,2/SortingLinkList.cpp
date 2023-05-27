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
    int zerocount =0;
    int onecount=0;
    int towcount=0;

    Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zerocount++;
        }
        else if(temp->data==1)
        {
            onecount++;
        }
        else if(temp->data==2)
        {
            towcount++;
        }

    }
    temp=head;
    while(temp!=NULL)
    {
        if(zerocount!=0)
        {
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0)
        {
            temp->data=1;
            onecount--;
        }
        else if(towcount!=0)
        {
            temp->data=2;
            towcount--;
        }
        temp=temp->next;
    }
    return head;
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