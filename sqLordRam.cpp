#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void LordRam(int n)
{
    stack<int> s;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(!s.empty() && s.top()>0 && x<0)
        {
            bool flag=0;
            while(!s.empty() && s.top()>0 && x<0)
            {
                if(abs(x)==abs(s.top()))
                {
                    s.pop();
                    flag=false;
                    break;
                }
                else if(abs(x)>abs(s.top()))
                {
                    s.pop();
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag) s.push(x);
        }
        else
        {
            s.push(x);
        }
    }
    stack<int> s1;
    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
}
int main() {
    int n;
    cin>>n;
    LordRam(n);
}
