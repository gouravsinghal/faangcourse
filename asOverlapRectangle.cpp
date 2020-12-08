#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool Overlap(vector<int> &r1,vector<int> &r2)
{
    if(r1[2]<=r2[0]|| r1[1]>=r2[3] || r1[0]>=r2[2] || r2[1]>=r1[3])
    {
        return false;
    }
    return true;
}
int main() {
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<Overlap(v1,v2);

}
