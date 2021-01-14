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

void Reverse(struct node *p)
{
    struct node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data<<" ";
        p = p->next;
    }

}

int main()
{
    int a[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(a, 8);
    Reverse(first);
    display(first);
    return 0;
}
