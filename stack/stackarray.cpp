#include<iostream>
using namespace std;
struct stack
{
int size;
int top;
int *s;
};
void create(struct stack *st)
{
cout<<"enter size"<<" ";
cin>>st->size;
st->top=-1;
st->s=new int[st->size];
}

void display(struct stack st)
{
int i;
for(i=st.top; i>0; i--)
{
cout<<st.s[i];
}
cout<<'\n';
}

void push(struct stack *st, int x)
{
if(st->top==st->size-1)
{
cout<<"stack overflow";
}
else
{
st->top++;
st->s[st->top]=x;
}
}

int pop(struct stack *st)
{
int x=-1;
if(st->top==-1)
{
cout<<"underflow"<<'\n';
}
else
{
x=st->s[st->top--];
}
return x;
}

int peek(struct stack st, int index)
{
int x=-1;
if(st.top-index+1<0)
{
cout<<"invalid index";
}
x=st.s[st.top-index+1];
return x;
}

int isempty(struct stack st)
{
if(st.top==-1)
{
return 1;
}
else
return 0;
}

int isfull(struct stack st)
{
if(st.top=st.size-1)
{
return 1;
}
}
int stacktop(struct stack st)
{
if(!isempty(st))
{
return st.s[st.top];
}
return -1;
}

int main()
{

struct stack st;
create(&st);
push(&st,10);
push(&st,20);
push(&st,30);
push(&st,40);
cout<< peek(st, 2);
display(st);
return 0;
}

