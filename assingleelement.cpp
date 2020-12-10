#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool single(vector<int> v,int m)
{
    if(m==0 && v[m]!=v[m+1]) return true;
    if(m==v.size()-1 && v[m]!=v[m-1]) return true;
    if(v[m]!=v[m-1] && v[m]!=v[m+1]) return true;
    return false;
}
int singleelement(vector<int> v)
{
    if(v.size()==1) return v[0];
    int l=0,h=v.size()-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(single(v,m)) return v[m];
        if(m+1<v.size() && v[m]==v[m+1])
        {
            if(m%2==0) l=m+1;
            else h=m-1;
        }
        if(m>=1 && v[m]==v[m-1])
        {
            if(m%2==1) l=m+1;
            else h=m-1;
        }
    }
    return v[l];
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
   cout<<singleelement(v);
   return 0;
}
