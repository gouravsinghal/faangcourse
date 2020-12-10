#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int mindistance(vector<string> s, string s1, string s2)
{
    int a1=-1;
    int a2=-1;
    int mi=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1)
        {
            a1=i;
        }
        if(s[i]==s2)
        {
            a2=i;
        }
        if(a1!=-1 && a2!=-1)
        {
            mi=min(mi,abs(a1-a2));
        }
    }
    return mi;
}
int main() {
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.push_back(a);
    }
    string s1,s2;
    cin>>s1>>s2;
    cout<<mindistance(s,s1,s2);
    return 0;
    }

