#include<iostream>
using namespace std;
int noofdigit(int n)
{
int k, count=0;
while(n>0)
{
n=n/10;
++count;
}
return count;
}

int renoofdigit(int m)
{
if(m==0)
{
return 0;
}
return 1+renoofdigit(m/10);
}

int log(long int l)
{
return floor(log(log10(l) +1);
}
int main()
{
int l;
l=1234;
cout<<noofdigit(l);
cout<< renoofdigit(l);
cout<< log(l);
return 0;
}
