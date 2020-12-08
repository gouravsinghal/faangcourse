#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void move(vector<int> &d)
{
    int ind=0;
    for(int i=0;i<d.size();i++)
    {
        if(d[i]!=0)
        {
            swap(d[i],d[ind]);
            ind++;
        }
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
   move(v);
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }
   return 0;

}
