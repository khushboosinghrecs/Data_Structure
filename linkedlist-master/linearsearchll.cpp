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
for(i=0; i<n; i++)
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
while(p!=NULL)
{
if(x==p->data)
{
return p;
}
p=p->next;
}
return NULL;
}

void display(struct node *p)
{
while(p)
{
cout<<p->data;
p=p->next;
}
}


int main()
{
struct node *temp;
int a[]={1,3,4,5,5, 9};

create(a, 6);
temp=lsearch(first , 4);
cout<< temp->next->data;
return 0;
}

