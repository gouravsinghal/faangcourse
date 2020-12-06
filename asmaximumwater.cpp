#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int *h =new int[n+1];
  for(int i=0;i<n;i++)
  {
    cin>>h[i];
  }
  int l=0;
  int r=n-1;
  int a=0;
  while(l<r)
  {
    a=max(a,min(h[r],h[l])*(r-l));
    if(h[l]<h[r])
    {
      l++;
    }
    else
    {
      r--;
    }
  }
  cout<<a<<endl;
}
