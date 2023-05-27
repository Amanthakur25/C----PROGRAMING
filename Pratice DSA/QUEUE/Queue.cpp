#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue()
    {
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }


    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (front == rear)
            return -1;

        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    void isempty()
    {
        if (front == rear)
            cout << "Queue is empty";
        else
            cout << "Queue is not empty";
    }

    int front()
    {
        if(front==rear)
            return -1;
        else{
            arr[front];
        }
    }
};
int main()
{

    return 0;
}