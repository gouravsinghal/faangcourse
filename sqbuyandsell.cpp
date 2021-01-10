#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> p)
{
    stack<int> s;
    int mp=0;
    int n=p.size();
    if(n==0) return 0;
    int i=1;
    s.push(p[0]);
    while(i<n)
    {
        if(p[i]<s.top())
        {
            s.push(p[i]);
        }
        else
        {
            int pr=p[i]-s.top();
            mp=max(mp,pr);

        }

        i++;
    }
    return mp;

}
int main() {
    int n;
    cin>>n;
    vector<int> p;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push_back(x);
    }
    cout<<maxProfit(p);
    return 0;
}
