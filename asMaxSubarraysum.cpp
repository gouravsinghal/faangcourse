#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int subsum(vector<int> v)
{
    int cs=0,mx=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        cs=cs+v[i];
        if(cs<0)
        {
            cs=0;
        }
        if(mx<cs)
        {
            mx=cs;
        }
    }
    return mx;
}
int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<subsum(v)<<endl;
        t--;
    }
    return 0;
}
