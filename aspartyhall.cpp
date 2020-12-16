#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partyHall(int s[],int e[],int n)
{
	sort(s,s+n);
	sort(e,e+n);
	int i=0,c=0,max=0,j=0;
	while(i<n-1 && j<n-1)
	{
		if(s[i]<e[j]){c++; i++;}
		else{c--; j++;}
		if(max<c) max=c;
	}
	return max;
}
int main() {
	int n;
	cin>>n;
	int s[n],e[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		cin>>e[i];
	}
	cout<<partyHall(s,e,n);
	return 0;
}
