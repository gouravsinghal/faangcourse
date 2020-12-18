#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int n=nums.size();
    if(nums[0]<=nums[n-1]) return nums[0];
    int l=0,r=n-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(nums[mid]<nums[mid-1]) return nums[mid];
        else if(nums[mid]>nums[n-1]) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int main()
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
    cout<<findMin(v);
    return 0;
}
