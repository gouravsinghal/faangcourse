#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int trap(vector<int> h)
{
    int n=h.size();
    if(n==0) return 0;
    int *ms,*me;
    ms=new int[100000];
    me=new int[100000];
    ms[0]=0;
    for(int i=1;i<n;i++)
    {
        ms[i]=max(ms[i-1],h[i-1]);
    }
    me[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        me[i]=max(me[i+1],h[i+1]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int l=min(ms[i],me[i]);
        if(l-h[i]>0)
        {
            ans+=l-h[i];
        }
    }
    return ans;

}
int main() {
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   cout<<trap(v);
}
