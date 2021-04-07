#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *root = NULL;
void reverse(Node *);
Node *reverseink(Node *, int);
//void check(Node *,int);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        root = NULL;
        int n, p, k;
        Node *temp = NULL, *curr = NULL, *head = NULL;
        scanf("%d", &n);
        p = n;
        while (n--)
        {
            temp = (Node *)malloc(sizeof(Node));
            scanf("%d", &temp->data);
            temp->next = NULL;
            if (root == NULL)
            {
                root = temp;
            }
            else
            {
                curr = root;
                while (curr->next != NULL)
                {
                    curr = curr->next;
                }
                curr->next = temp;
            }
        }
        scanf("%d", &k);
        Node *h = reverseink(root, k);
        temp = h;
        while (temp)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void reverse(Node *temp)
{
    Node *curr, *prev;
    curr = temp->next;
    prev = temp;
    while (curr)
    {
        //curr=temp->next;
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        /* code */
    }
    root->next = NULL;
    root = prev;
}
Node *reverseink(Node *start, int k)
{
    Node *p, *q, *head, *temp;
    p = start;
    int count = 1;
    while (count != k)
    {
        if (p->next == NULL)
        {
            return start;
        }
        else
        {
            p = p->next;
            count++;
        }
    }
    head = p;
    q = head;
    while (1)
    {
        p = start;
        temp = q->next;
        if (temp == NULL)
        {
            reverse(p);
            return head;
        }
        q->next = NULL;
        q = temp;
        count = 1;
        while (count != k)
        {
            if (temp->next == NULL)
            {
                reverse(p);
                p->next = q;
                return head;
            }
            else
            {
                temp = temp->next;
                count++;
            }
        }
        reverse(p);
        p->next = temp;
        q = temp;
    }
    return head;
}