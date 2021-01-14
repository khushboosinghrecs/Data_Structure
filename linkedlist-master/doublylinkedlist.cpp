#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *first=NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    int i;
    first=new node;
    first->data=a[0];
    first->prev=NULL;
    first->next=NULL;
    last =first;
    for(i=1; i<n; i++)
{
    t=new node;
    t->data=a[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
}
}
 
 void display(struct node *p)
 {
     while(p)
     {
         cout<< p->data<<" ";
         p=p->next;
     }
 }
  int length(struct node *p)
  {
      int l=0;
      while(p)
      {
          l++;
          p=p->next;
      }
      return l;
  }
   
void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if(index <0 || index>length(p))
    {
        return ;
    }
    if(index==0)
    {
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        
        for(i=0; i<index-1; i++)
        {
            p=p->next;
            t=new node;
            t->data=x;
            t->prev =p;
            t->next=p->next;
            if(p->next)p->next->prev=t;
            p->next=t;
        }
    }
    
}

int dele(struct node *p, int index)
{
    int x=-1, i;
    if(index<1 || index>length(p))
    {
        return -1;
    }
    if(index==1)
    {
        first=first->next;
        if(first)first->prev=NULL;
        x=p->data;
        free(p);
    }
    for(i=0; i<index-1; i++)
    {
        p=p->next;
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
            x=p->data;
            free(p);
        }
    }
    return x;
}

void reverse(struct node *p)
{
    struct node *temp;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        if(p!=NULL && p->next==NULL)
        first =p;
    }
}

int main()
{
    int a[]={10, 20, 30, 40, 50};

    create(a, 5);
   // reverse(first);
    display(first);
    return 0;
}
