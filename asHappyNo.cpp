#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int update(int n)
{
    int s=0;
    while(n)
    {
        int d=n%10;
        s=s+d*d;
        n=n/10;
    }
    return s;
}
bool check(int n,map<int,bool> m)
{
    if(n==1) return true;
    if(m.find(n)!=m.end()) return false;
    m.insert(make_pair(n,true));
    n=update(n);
    return check(n,m);
}
bool ishappy(int n)
{
    map<int,bool> m;
    return check(n,m);
}

int main() {
    int n;
    cin>>n;
    if(ishappy(n))
    {
        cout<<"true";
    }
    else
    cout<<"false";
    return 0;
}
