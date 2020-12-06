#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> v)
{
    int e1=v[0];
    int c1=1;
    int e2=0,c2=0;
    for(int i=1;i<v.size();i++)
    {
        if(e1==v[i])
        c1++;
        else if(e2==v[1])
        c2++;
        else if(c1==0)
        {
            e1=v[i];
            c1=1;
        }
        else if(c2==0)
        {
            e2=v[i];
            c2=1;
        }
        else {
            c1--;
            c2--;

        }
    }
    c1=c2=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==e1) c1++;
        if(v[i]==e1) c2++;
    }
    vector<int> ans;
    if(c1>v.size()/3) ans.push_back(e1);
    if(c2>v.size()/3) ans.push_back(e2);
    return ans;

}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     int x;
     cin>>x;
     v.push_back(x);
    }
    vector<int> ans=solve(v);
    if(ans.size()==0)
    {
        cout<<"No Majority Elements";
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

  return 0;
}
