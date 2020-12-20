#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> product (vector<int> &nums)
{
    int n=nums.size();
    int left[n];
    int right[n];
    left[0]=1;
    for(int i=1;i<n;i++)
    {
        left[i]=left[i-1]*nums[i-1];
    }
    right[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        right[i]=right[i+1]*nums[i+1];
    }
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int x;
        x=left[i]*right[i];
        ans.push_back(x);
    }
    return ans;
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
    vector<int> ans=product(v);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}
