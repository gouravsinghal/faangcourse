#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> temp(vector<int>a)
{
    vector<int> v;
    int n=a.size();
    for(int i=0;i<n;i++) v.push_back(0);
    stack<int> s;
    int i=0;
    while(i<n)
    {
        while(!s.empty() && a[i]>a[s.top()])
        {
            int x=s.top();
            s.pop();
            v[x]=i-x;
        }
        s.push(i);
        i++;
    }
    return v;

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
    vector<int> ans=temp(v);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
