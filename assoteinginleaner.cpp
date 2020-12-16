#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sortinleaner(vector<int> &v)
{
    int l=0,r=v.size()-1;
    int c=0;
    while(c<=r)
    {
        if(v[c]==0)
        {
            swap(v[c],v[l]);
            l++;
            c++;
        }
        else if(v[c]==2)
        {
            swap(v[c],v[r]);
            r--;
        }
        else
        c++;
    }
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
   sortinleaner(v);
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }
   return 0;
}
