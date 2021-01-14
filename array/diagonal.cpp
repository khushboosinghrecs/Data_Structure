#include<iostream>
using namespace std;

class diagonal
{
private:
int *a;
int n;
public:
diagonal(int n)
{
this->n=n;
a =new int[n];
}
~diagonal()
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

void diagonal:: Set(int i, int j, int x)
{
if(i==j)
{
a[i-1] =x;
}}
 
int diagonal:: Get(int i, int j)
{
if(i==j)
{
return a[i-1];
}
return 0;
}
  
void diagonal :: display()
{
for( int i=1; i<=n; i++)
{
for(int j=1; j<n; j++)
{
if(i==j)
cout<<a[i-1]<< " ";
else
cout<<"0 ";
}
cout<<endl;
}
}
int main()
{
int d;
cout<<"Enter Dimensions";
cin>>d;
diagonal dm(d);
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
