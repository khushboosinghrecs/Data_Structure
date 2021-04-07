#include<iostream>
using namespace std;

int fun(int n)
{
static int x=0;
x++;
while(n!=0)
{
return fun(n-1) +x;
}
return 0;
}
int main()
{
int k=3;
cout<<fun(k);
return 0;
}
 
