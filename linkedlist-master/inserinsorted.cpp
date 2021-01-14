#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    int i;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data<<" ";
        p = p->next;
    }
}

void sortedinsert(struct node *p, int x)
{
    struct node *t, *q = NULL;
    t = new node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)

    {
        first = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}


int main()
{
    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);
    sortedinsert(first, 15);
    display(first);
    return 0;
}
