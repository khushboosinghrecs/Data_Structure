#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enque(int x)
{
    struct node *t;
    t = new node;
    if (t == NULL)
    {
        cout << "queue is full" << '\n';
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct node *t;
    if (front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void display()
{
    struct node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    display();
    return 0;
}