#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int> nums,int s, int e)
{
	if(s==e) return s;
	int mid=(s+e)/2;
	if(nums[mid]<nums[mid+1])
	{
		return search(nums,mid+1,e);
	}
	return search(nums,s,mid);
}
int findPeak(vector<int> &nums)
{
	int s=0;
	int e=nums.size()-1;
	return search(nums,s,e);
}
int main() {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		v.push_back(x);
	}
	if(findPeak(v))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}
