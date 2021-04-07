#include<iostream>
using namespace std;
double e(int x, int n)
{
int i;
 double s=1;
double num =1;
double den=1;
for(i=1; i<n; i++)
{
num*=x;
den*=i;
s+=num/den;
}
return s;
}
int taylor(int a, int b)
{
double static k=1;
if(b==0)
{
return k;
}
else
{
k=1+a*k/b;
return taylor(a, b-1);
}
}
int main()
{
cout<< e(2, 1)<<'\n';
cout<< taylor(2, 10)<<'\n';
return 0;
}

