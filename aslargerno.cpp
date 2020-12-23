#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int largerno(int num)
{
    if(num==0) return -1;
    int a[9];
    int temp=num;
    int c=0;
    while(temp)
    {
     temp=temp/10;
     c++;
    }
    int N=c;
    int j=N-1;
    while(num>0)
    {
        if(j<0) return -1;
        a[j--]=num%10;
        num=num/10;
    }
    int s=j+1;
    int e=c-1;
    while(e>s)
    {
        if(a[e-1]<a[e]) break;
        e--;
    }
    if(e==s) return -1;
    int pos1=e-1;
    int pos2=e;
    while(e<N)
    {
        if(a[e]>a[pos1] && a[e]<a[pos2])
        {
            pos2=e;
        }
        e++;
    }
    swap(a[pos1],a[pos2]);
    for(int k=pos1+1;k<N;k++)
    {
        for(int i=pos1+1;i<N-1;i++)
        {
            if(a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
    }
    int te=0;
    for(int i=0;i<N;i++)
    {
      te=te*10+a[i];
    }
    return te;
    

}
int main() {
   int n;
   cin>>n;
   cout<<largerno(n);
}
