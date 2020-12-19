#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h> 
using namespace std;
int diagnol(int n, int m, int a[][100])
{
	int row=0,col=0,dir=1;
	int res[n*m];
	for(int i=0;i<m*n;i++)
	{
		res[i]=a[row][col];
		if(dir==1)
		{
			if(col==m-1) {
				row++;
				dir=-1;
			}
			else if(row==0)
			{
				col++; dir=-1;
			}
			else { row--; col++;}
		}
		else
		{
			if(row==n-1)
			{
				col++; dir=1;
			}
			else if(col==0)
			{
				row++; dir=1;
			}
			else {
				row++; col--;
			}
		}
	}
	for(int i=0;i<n*m;i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
int main() {
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
    diagnol(n,m,a);
	return 0;
}
