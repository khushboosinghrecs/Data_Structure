#include<iostream>
using namespace std;
struct node 
{
int data;
 struct node *next;
}*first=NULL;
 
void create(int a[], int n)
{
int i;
struct node *t, *last;
first= new node;
first->data=a[0];
first->next=NULL;
last=first;
for(i=1; i<n; i++)
{
t=new node;
t->data=a[i];
t->next=NULL;
last->next=t;
last=t;
}
}


struct node *lsearch(struct node *p, int x)
{
struct node *q;
while(p)
{
if(x==p->data)
{
q->next=p->next;
return p;
}
q=p;
p=p->next;
}
}


struct node *RSearch(struct node *p,int key)
{
if(p==NULL)
return NULL;
if(key==p->data)
return p;
return RSearch(p->next,key);
}


int main()
{
int a[]={1,3,34,56,677,8,0};
struct node *k;
create(a, 7);
k=lsearch(first, 3);
cout<< k->data;
return 0;
}
