#include<iostream>
#include<string.h>
using namespace std;
struct node
{
int data;
struct node *next;
}*top=NULL;

void push(string x)
{
struct node *t;
t=new node;
if(t==NULL)
{
cout<<"stack is empty";
}
else
{
t->data=x;
t->next=top;
top=t;
}
}

 string pop()
{
struct node *t;
string x=-1;
if(top==NULL)
{
cout<<"stack is empty"<<'\n';
}
else
{
t=top;
top=top->next;
x=t->data;
free(t);
}
return x;
}
 
void display()
{
struct node *t;
t=top;
while(t!=NULL)
{
cout<<t->data;
t=t->next;
}
cout<<'\n';
}

int isbalanced(char *exp)
{
int i;
for(i=0; exp[i]!='\0'; i++)
{
if(exp[i]=='(')
{
push(exp[i]);
}
else if(exp[i]==')')
{
if(top==NULL)
return 0;
pop();
}
}
if(top==NULL)
return 1;
else
return 0;
}

int main()
{
string exp="((a+b)*(c-d)))";
cout<<isbalanced(exp);
return 0;
}
