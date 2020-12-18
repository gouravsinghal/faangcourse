#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> firstlast(vector<int> v, int t)
{
    vector<int> ans;
    int s=0,e=v.size()-1;
    int f=INT_MAX,l=INT_MIN;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid]==t){
            f=min(f,mid);
            e=mid-1;
        }
        else if(v[mid]>t) e=mid-1;
        else s=mid+1;
    }
    s=0;
    e=v.size()-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid]==t) {
            l=max(l,mid);
            s=mid+1;
        }
       else if(v[mid]>t) e=mid-1;
        else s=mid+1;
    }
    if(f==INT_MAX) f=-1;
    if(l==INT_MIN) l=-1;
    ans.push_back(f);
    ans.push_back(l);
    return ans;

}
int main() {
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans=firstlast(v,t);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
