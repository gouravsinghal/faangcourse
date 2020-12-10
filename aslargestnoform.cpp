#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool fun(int a,int b)
{
    string s1=to_string(a);
    string s2=to_string(b);
    return s1+s2>s2+s1;
}
string largest(vector<int> &num)
{
    sort(num.begin(),num.end(),fun);
    int flag=0;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        string s="";
        for(int i=0;i<num.size();i++)
        {
            s+=to_string(num[i]);
        }
        return s;
    }
    else
    {
        return "0";
    }
}
int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        cout<<largest(v);
        t--;
    }
    return 0;
}
