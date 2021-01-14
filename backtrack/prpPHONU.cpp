#include <bits/stdc++.h>
using namespace std;
vector<string> abc;
void dialmobile(string ans,string s,int pos){
  if(pos == s.size()){
    cout << ans << ' ';
    return;
  }
  
  int i = pos;
    for(int j=0;j<abc[s[i]-'0'].size();j++){
        ans.push_back(abc[s[i]-'0'][j]);
        dialmobile(ans,s,pos+1);
        ans.pop_back();
    }
}
int main()
{
  abc.resize(2);
  abc.push_back("abc");
  abc.push_back("def");
  abc.push_back("ghi");
  abc.push_back("jkl");
  abc.push_back("mno");
  abc.push_back("pqrs");
  abc.push_back("tuv");
  abc.push_back("wxyz");
  int test;
  cin >> test;
  while(test--){
    
    string a;
    cin >> a;
    dialmobile("",a,0);
    cout << endl;
  }
  return 0;
}
