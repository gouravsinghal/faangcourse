#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string commonprefix(vector<string> v)
{
  if(v.size()==0)
  return "";
  string ans=v[0];
  for(int i=0;i<v.size();i++)
  {
      string  temp="";
      string a=v[i];
  for(int j=0;j<min(ans.length(),v[i].length());j++)
  {
       if(ans[j]==a[j])
       {
           temp+=ans[j];
       }
       else
       break;
  }
  ans=temp;
  }  
  return ans;
}
int main() {
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    cout<<commonprefix(v);
    return 0;
}
