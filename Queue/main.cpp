#include <iostream>
using namespace std;
struct Queue
{
    int arr[100];
    int fronta =-1;
    int rear = -1;
    void Enqueue( int val)
    {
        if (isFull())
        {
            return;
        }
        else if(isEmpty())
        {
            fronta = rear = 0;
        }
        else
        {
            rear ++;
        }
        arr[rear] = val;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            return;
        }
        else if (fronta==rear)
        {
            fronta = rear = -1;
        }
        else
            fronta++;
    }
    bool isEmpty()
    {
        if(fronta ==-1&&rear==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(rear==99)
            return true;
        else
            return false;
    }
    int front_val()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
            return arr[fronta];
    }
};

int main()
{
    Queue x;
    x.Enqueue(10);
    x.Enqueue(3);
    x.Enqueue(230);
    x.Enqueue(40);
    x.Enqueue(20);
    while (!x.isEmpty())
    {
        cout << x.front_val() << endl;
        x.Dequeue();
    }
    }
}
