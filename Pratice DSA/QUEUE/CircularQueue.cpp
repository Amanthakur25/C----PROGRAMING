#include <iostream>
using namespace std;
class CircularQueue
{
public:
    int front;
    int rear;
    int size;
    int *arr;

    CircularQueue(int size)
    {
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if ((rear + 1) % size == front)
            return true;
        else
            return false;
    }

    void enqueue(int value)
    {
        if (isfull())
            return;
        else if (isempty())
            front = rear = 0;
        else
        {
            rear = (rear + 1) % size;
            arr[rear++] = value;
        }
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty";
            return;
        }
        else if (front == rear)
            front = rear = -1;
        else
        {
            front = (front + 1) % size;
        }
    }
    void display()
    {
        int temp = front;
        while (temp != rear)
        {
            cout << arr[temp]<<" ";
            temp++;
            cout<<endl;
        }
    }
};
int main()
{
    CircularQueue CQ(5);
    CQ.enqueue(17);
    CQ.enqueue(18);
    CQ.enqueue(13);
    CQ.display();

    return 0;
}