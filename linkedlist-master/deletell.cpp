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
        cout << p->data;
        p = p->next ;
        cout<<'\n';
    }
}

void rdisplay(struct node *p)
{
    if (p != 0)
    {
        rdisplay(p->next);
        cout << p->data;
    }
}
int count(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
int delll(struct node *p, int index)
{
    struct node *q = NULL;
    int x = -1, i;
    if (index < 1 || index > count(p))
    {
        return -1;
    }
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    int a[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(a, 8);
    cout << delll(first, 5)<<'\n';
    display(first);
    cout<<count(first);
    return 0;
}
