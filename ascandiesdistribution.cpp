#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int candies(vector<int> r)
{
    int n=r.size();
    int c[n];
    c[0]=1;
    for(int i=1;i<n;i++)
    {
        if(r[i]>r[i-1])
        {
            c[i]=c[i-1]+1;
        }
        else c[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(r[i]>r[i+1])
        {
            if(c[i]<=c[i+1])
            {
                c[i]=c[i+1]+1;
            }
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=c[i];
    }
    return s;

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
   cout<<candies(v);
   return 0;
}
