#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int s;
    cin>>s;
    while(s)
    {
    int n;
    cin>>n;
    vector<int> h;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        h.push_back(x);
    }
    int maxh=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(maxh<h[i]) 
        {
        ans++;
        }
         maxh=max(maxh,h[i]);
    }
    cout<<ans<<endl;
    s--;
    }
    return 0;
}
