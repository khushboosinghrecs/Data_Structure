#include<iostream>
using namespace std;
struct term
{
int coeff;
int exp;
};
struct poly
{
int n;
struct term *terms;
};
void create(struct poly *p)
{
int i;
cout<<"num of terms?";
cin>> p->n;
p->terms = new term[p->n];
for(i=0; i<p->n ; i++)
{
cin>> p->terms[i].coeff>> p->terms[i].exp;
}
}
 void display(struct poly p)
{
int i; 
for(i=0; i<p.n; i++)
{
cout<< p.terms[i]->coeff<<"x"<<p.terms[i]-> exp;
cout<< '\n';
}
}
struct poly *add(struct poly *p1, struct poly *p2)
{
int i, j, k;
struct poly *Sum;
Sum=new poly;
Sum->terms=new term[p1->n+p2->n];
i=j=k=0;
while(i<p1->n && j<p2->n)
{
if(p1->terms[i].exp > p2->terms[i].exp)
{
Sum->terms[k++]= p1->terms[i++];
}
else if(p1->terms.exp <p2->terms.exp)
{
Sum->terms[k++]= p2->terms[j++];
}
else
{
Sum->terms[k].exp=p1->terms[i].exp;
Sum->terms[k++].coeff=p1->terms[i++].coeff+ p2->terms[j++].coeff;
}
}
for(; i<p1.n; i++)
Sum->terms[k++]=p1->terms[i];
for(; j<p2.n; j++)
Sum-> terms[k++]=p2->terms[j];
 

Sum->n=k;
return Sum;
}
int main()
{
struct poly p1, p2, *p3;
create(&p1);
create(&p2);
p3=add(&p1, &p2);
display(p1)
cout<<'\n';
display(p2)
cout<<'\n';
display(*p3)
cout<<'\n';
return 0;
}

