#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> duplicate(vector<int> v)
{
    vector<int> ans;
    for(int i=1;i<=v.size();i++)
    {
      int index=abs(v[i]);
      if(v[index]<0)
      {
          ans.push_back(v[i]);
      }
      else
      {
          v[index]*=-1;
      }
    }
    return ans;
    
}
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans=duplicate(v);
    cout<<"[";
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i];
      if(i!=ans.size()-1)
      {
      cout<<", ";
      }
    }
    cout<<"]";
}
