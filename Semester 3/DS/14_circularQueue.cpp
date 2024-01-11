#include <iostream>
#include <stdlib.h>
using namespace std;

#define max 3

class cqueueopr
{
public:
    int cqueue[max];
    int rear, front;

    cqueueopr()
    {
        rear = -1;
        front = -1;
    }

    void enqueue();
    void traverse();
    void dequeue();
};

void cqueueopr::enqueue()
{
    int item;

    if (front == (rear + 1) % max)
    {
        std::cout << "queue overflow";
        return;
    }
    else
    {
        std::cout << "Enter the element to insert: ";
        std::cin >> item;

        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % max;
        }

        cqueue[rear] = item;
        std::cout << "Inserted " << item;
    }
}

void cqueueopr::dequeue()
{
    int item;

    if (front == -1)
    {
        std::cout << "queue underflow";
    }
    else
    {
        item = cqueue[front];
        std::cout << "Deleted " << item;
    }

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % max;
    }
}

void cqueueopr::traverse()
{
    int i;

    if (front == -1)
    {
        std::cout << "Queue empty";
        return;
    }

    for (i = front; i != rear; i = (i + 1) % max)
    {
        std::cout << cqueue[i] << " ";
    }

    std::cout << cqueue[i];
}

int main()
{
    int ch;
    cqueueopr qu;

    do
    {
        std::cout << "\n1.ENQUEUE 2.DEQUEUE 3.TRAVERSE 4.EXIT\nEnter your choice: ";
        std::cin >> ch;

        switch (ch)
        {
        case 1:
            qu.enqueue();
            break;
        case 2:
            qu.dequeue();
            break;
        case 3:
            qu.traverse();
            break;
        case 4:
            exit(0);
        }
    } while (ch != 4);

    return 0;
}