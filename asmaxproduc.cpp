#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int> v)
{
    if(v.size()==1) return v[0];
    int pp=1,np=1,maxi=INT_MIN;
    bool hasp=false,hasz=false;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            hasp=true;
            pp=pp*v[i];
            if(np!=1) np*=v[i];
        }
        else if(v[i]<0)
        {
            int temp=pp;
            pp=max(1,np*v[i]);
            np=temp*v[i];
        }
        else{
            pp=np=1;
            hasz=true;
        }
        if(maxi<pp) maxi=pp;
    }
    if(maxi==1)
    {
        if(hasp) return maxi;
        if(hasz) return 0;
    }
    return maxi;

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
   cout<<maxproduct(v);
   return 0;
}
