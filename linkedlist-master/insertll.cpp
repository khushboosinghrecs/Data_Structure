#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*first =NULL;

void create(int a[], int n)
{
int i;
struct node *t, *last;
first= new node;
first->data= a[0];
first->next=NULL;
last =first;
for(i=1; i<n; i++)
{
t=new node;
t->data=a[i];
t->next=NULL;
last->next=t;
last=t;
}
}

void display(struct node *p)
{
while(p!=NULL)
{
cout<<p->data;
p=p->next;
}
}
int Count(struct node *p);

void insert(struct node *p, int index, int key)
{
struct node *t;
int i;

if(index <0 || index>Count(p))
{
return;
}
t=new node;
t->data=key;
t->next=NULL;
if(index==0)
{
t->next=first;
first=t;
}
else if(index>0 || index<Count(p))
{
first=p;
for(i=0; i<(index-1); i++)
{
p=p->next;
t->next=p->next;
p->next=t;
}
}
else
return;
}

int Count(struct node *p)
{
int l=0;
while(p)
{
l++;
p=p->next;
}
return l;
}


int main()
{
int a[]={1,3,4,5,5,6,9};
create(a, 7);
insert(first, 7, 0);
//display(first);
cout<<Count(first);
return 0;
}

