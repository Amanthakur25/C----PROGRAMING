#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
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
    }
};
void insertathead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "linklist is empty" << endl;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
bool checkcircular(Node* head)
{
    if (head==NULL)
    {
        return true;
    }
    Node* temp=head->next;
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==head)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *head = new Node(10);
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);

    print(head);
    cout << endl;
    if(checkcircular(head))
    {
        cout<<"LinkList is circular";
    }
    else{
        cout<<"it is not circular";
    }

    return 0;
}