#include <iostream>
#include<algorithm>
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
        cout << p->data<<'\n';
        p = p->next;
    }
}

void rdisplay(struct node *p)
{
    if (p != 0)
    {
        rdisplay(p->next);
        cout << p->data << '\n';
    }
}
void removeduplicate(struct node *p)
{
    struct node *q = p->next;
    while (q)
    {
        if (p->data != q->data && p->data<q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            //free(p);
            //p->next=q;
            free(q);
            q = p->next;
        }
    }
}

int main()
{
    int a[] = {7, 89, 5, 6, 6, 8, 6, 9};
    sort(a, a+8);
    create(a, 8);
    removeduplicate(first);
    display(first);
    return 0;
}
