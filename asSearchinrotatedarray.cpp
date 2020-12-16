#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int> v, int t)
{
    int n=v.size();
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(t==v[mid]) return mid;
        else if(v[mid] > v[n-1])
        {
            if(t<v[0] || t>v[mid]) l=mid+1;
            else r=mid-1;
        }
        else
        {
            if(t>v[n-1] || t<v[mid]) r=mid-1;
            else l=mid+1;
        }
    }
    return -1;
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
    int t;
    cin>>t;
    cout<<search(v,t);
    return 0;
}
