#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int distributecandies(vector<int> v)
{
    unordered_map<int,int> m;
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(m.find(v[i])==m.end())
        {
            m.insert({v[i],1});
            count++;
        }
        else
        m[v[i]]++;
    }
    int ans=count<v.size()/2?count:v.size()/2;
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;v.push_back(x);
    }
    cout<<distributecandies(v)<<endl;
    return 0;

}
