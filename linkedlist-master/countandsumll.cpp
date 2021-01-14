#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*first =NULL;
 
void create(int a[], int n)
{
struct node *t, *last;
int i;
first=new node;
first->data=a[0];
first->next =NULL;
last = first;
for (i=1; i<n; i++)
{
t=new node;
t->data=a[i];
t->next=NULL;
last ->next=t;
last =t;
}
}
 
int count(struct node *p)
{
int l=0;
while(p)
{
l++;
p=p->next;
}
return l;
}

int Sum(struct node *p)
{
int s=0;
while(p)
{
s=s+p->data;
p=p->next;
}
return s;
}
int rsum(struct node *p)
{
if(p==NULL)
{
return 0;
}
else
{
return rsum(p->next) + p->data;
}
}
int rcount(struct node *p)
{
int s=0;
if(p==NULL)
{
return 0;
}
else
{
return rsum(p->next) +1;
}
}
 
int main()
{
int a[]={3,4,5,6,7,88,90, 8};
create (a, 8);
cout<< count(first)<<'\n';
cout<< Sum(first)<<'\n';
return 0;
}
