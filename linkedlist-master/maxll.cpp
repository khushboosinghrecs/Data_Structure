#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*first =NULL;

void create(int a[], int n)
{
struct node *t , *last;
first= new node;
first->data=a[0];
first ->next=NULL;
last=first;
int i;
for(i=1; i<n; i++)
{
t=new node;
t->data=a[i];
t->next=NULL;
last->next=t;
last=t;
}
}
int maxel(struct node *p)
{ 
int Mmmax=-32767;
while(p)
{
if(p->data>Mmmax)
  Mmmax=p->data;
p=p->next;
}
return Mmmax;
}

int RMax(node *p)
{
int x=0;
if(p==0)
return INT32_MIN;
x=RMax(p->next);
if(x>p->data)
return x;
else
return p->data;
}

void display(struct node *p)
{
while(p)
{
cout<<p->data<<" ";
 p=p->next;
}
}


int minel(struct node *p)
{
int mmin=32767;
while(p)
{
if (p->data<mmin)
mmin=p->data;
p=p->next;
}
return mmin;
}



 
int main()
{
int a[]={1,3,5,2,6,7,9};
create(a, 7);
//cout<< maxel(first)<<endl;
//display(first);
cout<<"delete first node"<< minel(first);
return 0;
}


