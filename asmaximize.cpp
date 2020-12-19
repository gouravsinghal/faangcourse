#include <bits/stdc++.h>
using namespace std;
int maxvalue(vector<int> &a, vector<int> &b)
{
    int n=a.size(); int m;
    int a1=INT_MIN,a2=INT_MAX;
    int b1=INT_MIN,b2=INT_MAX;
    int c1=INT_MIN,c2=INT_MAX;
    int d1=INT_MIN,d2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a1<b[i]+a[i]+i) a1=b[i]+a[i]+i;
        if(a2>b[i]+a[i]+i) a2=b[i]+a[i]+i;
        if(b1<b[i]-a[i]+i) b1=b[i]-a[i]+i;
        if(b2>b[i]-a[i]+i) b2=b[i]-a[i]+i;
        if(c1<b[i]+a[i]-i) c1=b[i]+a[i]-i;
        if(c2>b[i]+a[i]-i) c2=b[i]+a[i]-i;
        if(d1<b[i]-a[i]-i) d1=b[i]-a[i]-i;
        if(d2>b[i]-a[i]-i) d2=b[i]-a[i]-i;

    }
    int case1=a1-a2>b1-b2?a1-a2:b1-b2;
    int case2=c1-c2>d1-d2?c1-c2:d1-d2;
    m=case1>case2?case1:case2;
    return m;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> d;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        d.push_back(x);
    }
    cout<<maxvalue(v,d);
return 0;}
