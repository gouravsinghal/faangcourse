#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool canAttendall(vector<vector<int>> interval)
{
    int i=1;
    sort(interval.begin(),interval.end());
    while(i<interval.size())
    {
        if(interval[i][0]<interval[i-1][1])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main() {
   int n;
   cin>>n;
   vector<vector<int>> interval;
   for(int i=0;i<n;i++)
   {
       int s,e;
       vector<int> v;
       cin>>s>>e;
       v.push_back(s);
       v.push_back(e);
       interval.push_back(v);
   }
   if(canAttendall(interval))
   {
       cout<<"true";
   }
   else
   {
       cout<<"false";
   }
   return true;
}
