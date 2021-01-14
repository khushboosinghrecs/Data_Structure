#include<iostream>
using namespace std;
class lowertriangle
{
private:
int *a;
int n;
public:
lowertriangle(int n)
{
this->n=n;
a=new int[n];
}
~lowertriangle()
{
delete []a;
}
void Set(int i, int j, int x);
int Get(int i, int j);
void display();
int getdimension()
{
return n;
}
};
void lowertriangle:: Set(int i, int j, int x)
{
 if(i>=j)
{
a[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}
}

int lowertriangle:: Get(int i, int j)
{
if(i>=j)
return a[n*(j-1)+(j-2)*(j-1)/2+i-j];
else
return 0;
}
void lowertriangle:: display()
{
int i , j;
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
if(i>j)
cout<<a[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
else
cout<<"0 ";
}
cout<<'\n';
}
}
  

int main()
{
int d;
cout<<"Enter Dimensions";
cin>>d;
lowertriangle dm(d);
int x;
cout<<"Enter All Elements";
for(int i=1;i<=d;i++)
{
for(int j=1;j<=d;j++)
{
cin>>x;
dm.Set(i,j,x);
}
}
dm.display();
return 0;
}
