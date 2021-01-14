#include <bits/stdc++.h>
using namespace std;
set<string> abc;
void combi(string a,int i){
  /*if(i > a.size()){
    return;
  }*/
  
  if(i == a.size()){
   // cout<<a<<"  "<<i<<'\n';
    abc.insert(a);
    return;
  }
  
  combi(a,i+1);
  if(a[i] >= '0' && a[i] <= '9'){
    
  }else if(a[i] >='a' && a[i] <= 'z'){
    a[i] = a[i] -'a' + 'A';
    combi(a,i+1);
  }else if(a[i] >='A' && a[i] <= 'Z'){
    a[i] = a[i] - 'A' + 'a';
    combi(a,i+1);
  }
  
  
}

int main()
{
  string a;
  cin >> a;
  abc.clear();
  combi(a,0);
  for(string x : abc){
    cout << x << '\n';
  }
  return 0;
}
