#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int petrolpump(vector<int> p, vector<int> c)
{
    int cur=0,n=0,s=0;
    for(int i=0;i<p.size();i++)
    {
        n+=p[i]-c[i];
        cur=p[i]-c[i];
        if(cur<0)
        {
            cur=0;
            s=i+1;
        }
    }
    if(n<0) return -1;
    return s;
}
int main() {
    int n;
    cin>>n;
    vector<int> p;
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        c.push_back(x);
    }
    cout<<petrolpump(p,c);
    return 0;
}
