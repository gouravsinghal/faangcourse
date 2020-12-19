#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> findclosest(vector<int> &arr, int k,int x)
{
	int n=arr.size();
	int cursum=0,pos=0;
	for(int i=0;i<k;i++)
	{
		cursum+=abs(x-arr[i]);
	}
	int sum=cursum;
	for(int i=1;i<n-k;i++)
	{
		cursum-=abs(x-arr[i-1]);
		cursum+=abs(x-arr[i+k-1]);
		if(cursum<sum)
		{
			sum=cursum;
			pos=i;
		}
	}
	vector<int> ans;
	for(int i=0;i<k;i++)
	{
		ans.push_back(arr[i+pos]);
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
	int k,x;
	cin>>k>>x;
	vector<int> ans;
	ans=findclosest(v,k,x);
	for(int i=0;i<k;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
