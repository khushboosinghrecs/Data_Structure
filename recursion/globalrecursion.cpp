#include<iostream>
using namespace std;
int k=5;
int fun(int n)
{
k++;
while(n!=0)
{
return fun(n-1)+k;
}
return 0;
}
int main()
{
cout<<fun(5);
return 0;
}
