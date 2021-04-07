#include<iostream>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root=NULL;

void insert(int key)
{
    struct node *t=root;
    struct node *r=NULL, *p;
    if(root==NULL)
    {
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root =p;
        return ;
    }
while(t!=NULL)
{
    r=t;
    if(key<t->data)
    {
        t=t->lchild;
    }
    else if(key>t->data)
    {
        t=t->rchild;
    }
    else
    {
        
        return ;
    }
}
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key<r->data) r->lchild=p;
    else r->rchild=p;
}

void inorder(struct node *p)
{

    if(p)
    {
        inorder(p->lchild);
        cout<<p->data;
        inorder(p->rchild);
    }
}

struct node *search(int key)
{
    struct node *t=root;
    while(t!=NULL)
    {
        if(key==t->data)
        {
            return t;
        }
        else if(key <t->data)
        {
           t=t->lchild;
        }
        else
        {
            t=t->rchild;
        }
        return NULL;
    }
}

int main()
{
    struct node *t;
    root=rinsert(root, 50);
    rinsert(root, 10);
    rinsert(root, 40);
    rinsert(root, 30);
    temp=search(20);
    if(temp!=NULL)
cout<<"element %d is found\n"<<temp->data;
else
cout<<"element is not found\n";
return 0;
}