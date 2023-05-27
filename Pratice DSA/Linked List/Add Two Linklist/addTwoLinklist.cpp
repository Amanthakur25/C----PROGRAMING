#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        while (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for " << value;
        cout << endl;
    }
};
void insertAthead(Node *&head, Node *&tail, int value)
{
    Node *temp = new Node(value);
    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
    }

    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&head, Node *&tail, int value)
{

    Node *temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }

    tail->next = temp;
    tail = temp;
}
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "lisnklist is empty";
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
Node *reverseLinklist(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}
struct Node *add(struct Node *first, struct Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {

        int val1 = 0;
        if (first != NULL)
            val1 = first->data;

        int val2 = 0;
        if (second != NULL)
            val2 = second->data;

        int sum = carry + val1 + val2;

        int digit = sum % 10;

        // create node and add in answer Linked List
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        if (first != NULL)
            first = first->next;

        if (second != NULL)
            second = second->next;
    }
    return ansHead;
}
int main()
{

    cout << endl;
    Node *first = new Node(2);
    Node *tail = first;
    insertAtTail(first, tail, 3);
    insertAthead(first, tail, 1);
   

    cout << endl;

    Node *second = new Node(1);
    Node *tail2 = second;
    insertAtTail(second, tail2, 2);
    insertAtTail(second, tail2, 3);
    

    // step 1 reverse a Linklist

    reverseLinklist(first);
    reverseLinklist(second);

    // step 2 add the Linklist

    Node *ans = add(first, second);

    // step 4 rever the solutuin

    print(ans);

    return 0;
}