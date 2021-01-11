#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void balanced(string b,int o,int c, int m)
{
    if(b.length()==2*m)
    {
        cout<<b;
        cout<<endl;
    }
    if(c<o) balanced(b+')',o,c+1,m);
    if(o<m) balanced(b+'(',o+1,c,m);
}
int main() {
    int m;
    cin>>m;
    balanced("",0,0,m);
   
}
