#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool stringcomp(string s, string t)
{
    string s1=s.length()<t.length()?s:t;
    string s2=s.length()>t.length()?s:t;
    int k=0,i=0,c=0;
    if(s1.length()<s2.length())
    {
        while(i<s1.length() && k<s2.length())
        {
            if(s1[i]==s2[k])
            {
                i++;
                k++;
                c++;
            }
            else
            k++;
        }
    }
    else
    {
        while(i<s1.length() && k<s2.length())
        {
            if(s1[i]==s2[k]) c++;
            i++;
            k++;
        }
    }
    if(s2.length()-1==c)
    {
        return true;
    }
    else
    return false;
}
int main() {
    string s,t;
    cin>>s>>t;
    if(stringcomp(s,t)) cout<<"True";
    else cout<<"False";
}
